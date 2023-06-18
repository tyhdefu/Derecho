/* This is a copy of zap0light16.psf adapted for Derecho. Find a copy here: https://www.zap.org.au/projects/console0fonts0zap/

Copyright © 2004–19, John Zaitseff.

The Linux Console Fonts package is free software that is distributed under the terms of the GNU General Public License. You can redistribute it and/or modify it under the terms of that License as published by the Free Software Foundation, either version 3 or (at your option) any later version.

This font package is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
*/

#include "font.h"

#include <types.h>

// #pragma region 
// GLYPH(
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000,
// 	0b00000000
// ),
// #pragma endregion

Glyph DerechoBuiltInFont[] = {
	EMPTY_GLYPH,		// 0x00 NUL
	EMPTY_GLYPH,		// 0x01 SOH
	EMPTY_GLYPH,		// 0x02 STX
	EMPTY_GLYPH,		// 0x03 ETX
	EMPTY_GLYPH,		// 0x04 EOT
	EMPTY_GLYPH,		// 0x05 ENQ
	EMPTY_GLYPH,		// 0x06 ACK
	EMPTY_GLYPH,		// 0x07 BEL
	EMPTY_GLYPH,		// 0x08 BS
	EMPTY_GLYPH,		// 0x09 TAB
	EMPTY_GLYPH,		// 0x0A LF
	EMPTY_GLYPH,		// 0x0B VT
	EMPTY_GLYPH,		// 0x0C FF
	EMPTY_GLYPH,		// 0x0D CR
	EMPTY_GLYPH,		// 0x0E SO
	EMPTY_GLYPH,		// 0x0F SI
	EMPTY_GLYPH,		// 0x10 DLE
	EMPTY_GLYPH,		// 0x11 DC1
	EMPTY_GLYPH,		// 0x12 DC2
	EMPTY_GLYPH,		// 0x13 DC3
	EMPTY_GLYPH,		// 0x14 DC4
	EMPTY_GLYPH,		// 0x15 NAK
	EMPTY_GLYPH,		// 0x16 SYN
	EMPTY_GLYPH,		// 0x17 ETB
	EMPTY_GLYPH,		// 0x18 CAN
	EMPTY_GLYPH,		// 0x19 EM
	EMPTY_GLYPH,		// 0x1A SUB
	EMPTY_GLYPH,		// 0x1B ESC
	EMPTY_GLYPH,		// 0x1C FS
	EMPTY_GLYPH,		// 0x1D GS
	EMPTY_GLYPH,		// 0x1E RS
	EMPTY_GLYPH,		// 0x1F US
	EMPTY_GLYPH,		// 0x20 Space
	#pragma region ExclamationMark
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion ExclamationMark
	#pragma region SpeechMark
	GLYPH(
		0b00000000,
		0b00100100,
		0b00100100,
		0b00100100,
		0b00100100,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion SpeechMark
	#pragma region Hash
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00100100,
		0b00100100,
		0b00100100,
		0b01111110,
		0b00100100,
		0b00100100,
		0b01111110,
		0b00100100,
		0b00100100,
		0b00100100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Hash
	#pragma region DollarSign
	GLYPH(
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00111110,
		0b01001001,
		0b01001000,
		0b01001000,
		0b00111110,
		0b00001001,
		0b00001001,
		0b01001001,
		0b00111110,
		0b00001000,
		0b00001000,
		0b00000000
	),
	#pragma endregion DollarSign
	#pragma region PercentSign
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00110001,
		0b01001010,
		0b01001010,
		0b00110100,
		0b00001000,
		0b00001000,
		0b00010110,
		0b00101001,
		0b00101001,
		0b01000110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion PercentSign
	#pragma region Ampersand
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00011000,
		0b00100100,
		0b00100100,
		0b00100100,
		0b00011000,
		0b00101000,
		0b01000101,
		0b01000010,
		0b01000110,
		0b00111001,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Ampersand
	#pragma region Apostrophe
	GLYPH(
		0b00000000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Apostrophe
	#pragma region OpenBracket
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000100,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00001000,
		0b00001000,
		0b00000100,
		0b00000000,
		0b00000000
	),
	#pragma endregion OpenBracket
	#pragma region CloseBracket
	GLYPH(
		0b00000000,
		0b00000000,
		0b00100000,
		0b00010000,
		0b00010000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00010000,
		0b00100000,
		0b00000000,
		0b00000000
	),
	#pragma endregion CloseBracket
	#pragma region Asterix
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b01001001,
		0b00101010,
		0b00011100,
		0b00101010,
		0b01001001,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Asterix
	#pragma region PlusSign
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b01111111,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion PlusSign
	#pragma region Comma
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00000000
	),
	#pragma endregion Comma
	#pragma region MinusSign
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion MinusSign
	#pragma region FullStop
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion FullStop
	#pragma region ForwardSlash
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000010,
		0b00000010,
		0b00000100,
		0b00000100,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00010000,
		0b00100000,
		0b00100000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion ForwardSlash
	#pragma region _0
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01001010,
		0b01010010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _0
	#pragma region _1
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00011000,
		0b00101000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _1
	#pragma region _2
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b00000010,
		0b00000100,
		0b00001000,
		0b00010000,
		0b00100000,
		0b01000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _2
	#pragma region _3
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b00000010,
		0b00011100,
		0b00000010,
		0b00000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _3
	#pragma region _4
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000100,
		0b00001100,
		0b00010100,
		0b00100100,
		0b01000100,
		0b01000100,
		0b01111110,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _4
	#pragma region _5
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01111100,
		0b00000010,
		0b00000010,
		0b00000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _5
	#pragma region _6
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00011100,
		0b00100000,
		0b01000000,
		0b01000000,
		0b01111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _6
	#pragma region _7
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b00000010,
		0b00000010,
		0b00000100,
		0b00000100,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _7
	#pragma region _8
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _8
	#pragma region _9
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111110,
		0b00000010,
		0b00000010,
		0b00000100,
		0b00111000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion _9
	#pragma region Colon
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Colon
	#pragma region SemiColon
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00000000
	),
	#pragma endregion SemiColon
	#pragma region LessThan
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000100,
		0b00001000,
		0b00010000,
		0b00100000,
		0b01000000,
		0b00100000,
		0b00010000,
		0b00001000,
		0b00000100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion LessThan
	#pragma region Equals
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Equals
	#pragma region GreaterThan
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00100000,
		0b00010000,
		0b00001000,
		0b00000100,
		0b00000010,
		0b00000100,
		0b00001000,
		0b00010000,
		0b00100000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion GreaterThan
	#pragma region QuestionMark
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b00000010,
		0b00000100,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion QuestionMark
	#pragma region AtSymbol
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00011100,
		0b00100010,
		0b01001010,
		0b01010110,
		0b01010010,
		0b01010010,
		0b01010010,
		0b01001110,
		0b00100000,
		0b00011110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion AtSymbol
	#pragma region A
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00011000,
		0b00100100,
		0b00100100,
		0b01000010,
		0b01000010,
		0b01111110,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion A
	#pragma region B
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion B
	#pragma region C
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion C
	#pragma region D
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111000,
		0b01000100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000100,
		0b01111000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion D
	#pragma region E
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01111100,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion E
	#pragma region F
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01111100,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion F
	#pragma region G
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000000,
		0b01000000,
		0b01001110,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion G
	#pragma region H
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01111110,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion H
	#pragma region I
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111110,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion I
	#pragma region J
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00011111,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b01000100,
		0b01000100,
		0b00111000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion J
	#pragma region K
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01000100,
		0b01001000,
		0b01010000,
		0b01100000,
		0b01100000,
		0b01010000,
		0b01001000,
		0b01000100,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion K
	#pragma region L
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion L
	#pragma region M
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000001,
		0b01100011,
		0b01100011,
		0b01010101,
		0b01010101,
		0b01001001,
		0b01001001,
		0b01000001,
		0b01000001,
		0b01000001,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion M
	#pragma region N
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01100010,
		0b01100010,
		0b01010010,
		0b01010010,
		0b01001010,
		0b01001010,
		0b01000110,
		0b01000110,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion N
	#pragma region O
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion O
	#pragma region P
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01111100,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion P
	#pragma region Q
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01011010,
		0b01100110,
		0b00111100,
		0b00000011,
		0b00000000,
		0b00000000
	),
	#pragma endregion Q
	#pragma region R
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01111100,
		0b01001000,
		0b01000100,
		0b01000100,
		0b01000010,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion R
	#pragma region S
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000000,
		0b00110000,
		0b00001100,
		0b00000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion S
	#pragma region T
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111111,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion T
	#pragma region U
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion U
	#pragma region V
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000001,
		0b01000001,
		0b01000001,
		0b00100010,
		0b00100010,
		0b00100010,
		0b00010100,
		0b00010100,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion V
	#pragma region W
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000001,
		0b01000001,
		0b01000001,
		0b01001001,
		0b01001001,
		0b01010101,
		0b01010101,
		0b01100011,
		0b01100011,
		0b01000001,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion W
	#pragma region X
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01000010,
		0b00100100,
		0b00100100,
		0b00011000,
		0b00011000,
		0b00100100,
		0b00100100,
		0b01000010,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion X
	#pragma region Y
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000001,
		0b01000001,
		0b00100010,
		0b00100010,
		0b00010100,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Y
	#pragma region Z
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b00000010,
		0b00000010,
		0b00000100,
		0b00001000,
		0b00010000,
		0b00100000,
		0b01000000,
		0b01000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Z
	#pragma region OpenSquareBracket
	GLYPH(
		0b00000000,
		0b00000000,
		0b00011100,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00011100,
		0b00000000,
		0b00000000
	),
	#pragma endregion OpenSquareBracket
	#pragma region BackSlash
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00100000,
		0b00100000,
		0b00010000,
		0b00010000,
		0b00001000,
		0b00001000,
		0b00000100,
		0b00000100,
		0b00000010,
		0b00000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Backslash
	#pragma region CloseSquareBracket
	GLYPH(
		0b00000000,
		0b00000000,
		0b00111000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00111000,
		0b00000000,
		0b00000000
	),
	#pragma endregion CloseSquareBracket
	#pragma region Caret
	GLYPH(
		0b00000000,
		0b00001000,
		0b00010100,
		0b00100010,
		0b01000001,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Caret
	#pragma region Underscore
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111111,
		0b00000000,
		0b00000000
	),
	#pragma endregion Underscore
	#pragma region Backtick
	GLYPH(
		0b00000000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Backtick
	#pragma region a
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b00000010,
		0b00111110,
		0b01000010,
		0b01000010,
		0b01000110,
		0b00111010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion a
	#pragma region b
	GLYPH(
		0b00000000,
		0b00000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01011100,
		0b01100010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01100010,
		0b01011100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion b
	#pragma region c
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion c
	#pragma region d
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000010,
		0b00000010,
		0b00000010,
		0b00111010,
		0b01000110,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000110,
		0b00111010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion d
	#pragma region e
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01111110,
		0b01000000,
		0b01000000,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion e
	#pragma region f
	GLYPH(
		0b00000000,
		0b00000000,
		0b00001110,
		0b00010000,
		0b00010000,
		0b00010000,
		0b01111100,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion f
	#pragma region g
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111010,
		0b01000110,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000110,
		0b00111010,
		0b00000010,
		0b00000010,
		0b01000010,
		0b00111100
	),
	#pragma endregion g
	#pragma region h
	GLYPH(
		0b00000000,
		0b00000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01011100,
		0b01100010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion h
	#pragma region i
	GLYPH(
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00011000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion i
	#pragma region j
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000100,
		0b00000100,
		0b00000000,
		0b00001100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b01000100,
		0b00111000
	),
	#pragma endregion j
	#pragma region k
	GLYPH(
		0b00000000,
		0b00000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000100,
		0b01001000,
		0b01010000,
		0b01100000,
		0b01010000,
		0b01001000,
		0b01000100,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion k
	#pragma region l
	GLYPH(
		0b00000000,
		0b00000000,
		0b00011000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion l
	#pragma region m
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01110110,
		0b01001001,
		0b01001001,
		0b01001001,
		0b01001001,
		0b01001001,
		0b01001001,
		0b01001001,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion m
	#pragma region n
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01011100,
		0b01100010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion n 
	#pragma region o
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion o
	#pragma region p
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01011100,
		0b01100010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01100010,
		0b01011100,
		0b01000000,
		0b01000000,
		0b01000000
	),
	#pragma endregion p
	#pragma region q
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111010,
		0b01000110,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000110,
		0b00111010,
		0b00000010,
		0b00000010,
		0b00000010
	),
	#pragma endregion q
	#pragma region r
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01011100,
		0b01100010,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b01000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion r
	#pragma region s
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00111100,
		0b01000010,
		0b01000000,
		0b00110000,
		0b00001100,
		0b00000010,
		0b01000010,
		0b00111100,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion s
	#pragma region t
	GLYPH(
		0b00000000,
		0b00000000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b01111100,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00001110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion t
	#pragma region u
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000110,
		0b00111010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion u
	#pragma region v
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000001,
		0b01000001,
		0b01000001,
		0b00100010,
		0b00100010,
		0b00010100,
		0b00010100,
		0b00001000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion v
	#pragma region w
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000001,
		0b01000001,
		0b01001001,
		0b01001001,
		0b01001001,
		0b01001001,
		0b01001001,
		0b00110110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion w
	#pragma region x
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01000010,
		0b00100100,
		0b00011000,
		0b00011000,
		0b00100100,
		0b01000010,
		0b01000010,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion x
	#pragma region y
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000010,
		0b01000110,
		0b00111010,
		0b00000010,
		0b00000010,
		0b01000010,
		0b00111100
	),
	#pragma endregion y
	#pragma region z
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111110,
		0b00000010,
		0b00000100,
		0b00001000,
		0b00010000,
		0b00100000,
		0b01000000,
		0b01111110,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion z
	#pragma region OpenCurlyBracket
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000110,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00110000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000110,
		0b00000000,
		0b00000000
	),
	#pragma endregion OpenCurlyBracket
	#pragma region VerticalBar
	GLYPH(
		0b00000000,
		0b00000000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000000,
		0b00000000
	),
	#pragma endregion VerticalBar
	#pragma region CloseCurlyBracket
	GLYPH(
		0b00000000,
		0b00000000,
		0b00110000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000110,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00110000,
		0b00000000,
		0b00000000
	),
	#pragma endregion CloseCurlyBracket
	#pragma region Tilde
	GLYPH(
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00110001,
		0b01001001,
		0b01000110,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000
	),
	#pragma endregion Tilde
	EMPTY_GLYPH		// 0x7F DEL
};
