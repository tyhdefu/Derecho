#include "UEFImemory.h"

#include <bootinfo.h>
#include <main.h>
#include <types.h>
#include <efi.h>
#include <efilib.h>

UEFIMemoryMap_t UEFIMemoryMap;

uint8_t MemoryInitialised = 0;

void InitialiseMemoryMap()
{
	if(MemoryInitialised) return;

	MemoryInitialised = 1;													// Memory never gets initialised more than once

	UEFIMemoryMap.MapSize = sizeof(EFI_MEMORY_DESCRIPTOR) * 64;				// Try this size for storing the memory map
	EFI_STATUS Status;
	while(1)																// Try storing the memory map in this size
	{
		Status = uefi_call_wrapper(
			ST->BootServices->AllocatePool, 3,
			EfiLoaderData,
			UEFIMemoryMap.MapSize,
			(void**)&UEFIMemoryMap.Map
		);
		Status = uefi_call_wrapper(
			ST->BootServices->GetMemoryMap, 5,
			&UEFIMemoryMap.MapSize,
			UEFIMemoryMap.Map,
			&UEFIMemoryMap.MapKey,
			&UEFIMemoryMap.DescriptorSize,
			&UEFIMemoryMap.DescriptorVersion
		);
		if(Status == EFI_BUFFER_TOO_SMALL)									// If it's too small, free the memory, up the size, and try again
		{
			Status = uefi_call_wrapper(
				ST->BootServices->FreePool, 1,
				UEFIMemoryMap.Map
			);
			UEFIMemoryMap.MapSize += sizeof(EFI_MEMORY_DESCRIPTOR) * 16;
		}
		else break;
	}

	uint64_t BestAllocStart = 0, BestNumPages = 0;							// Find the best place to allocate memory from
	for(int x = 0; x < UEFIMemoryMap.MapSize; x++)
	{
		EFI_MEMORY_DESCRIPTOR* Descriptor = (EFI_MEMORY_DESCRIPTOR*)(		// Get next descriptor
			(uint64_t)UEFIMemoryMap.Map + (x * UEFIMemoryMap.DescriptorSize)
		);
		if(Descriptor->Type != EfiConventionalMemory) continue;				// Ignore sections that aren't conventional (allocatable) memory
		if(Descriptor->NumberOfPages <= BestNumPages) continue;				// Ignore any sections that aren't bigger than the current biggest
		BestNumPages = Descriptor->NumberOfPages;
		BestAllocStart = Descriptor->PhysicalStart;
	}

	BI.UEFIMemoryMap = &UEFIMemoryMap;

	Print(L"- Memory Map Initialised.\r\n");
}