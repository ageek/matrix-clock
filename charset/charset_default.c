uint8_t charset_char[] = {
// 20 -  
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
// 21 - !
0b01001111,
// 22 - "
0b00000111,
0b00000000,
0b00000111,
// 23 - #
0b00010100,
0b00111110,
0b00010100,
0b00111110,
0b00010100,
// 24 - $
0b00100100,
0b00101010,
0b01111111,
0b00101010,
0b00010010,
// 25 - %
0b00100011,
0b00010011,
0b00001000,
0b01100100,
0b01100010,
// 26 - &
0b00110110,
0b01001001,
0b01010101,
0b00100010,
0b01010000,
// 27 - '
0b00000101,
0b00000011,
// 28 - (
0b00011100,
0b00100010,
0b01000001,
// 29 - )
0b01000001,
0b00100010,
0b00011100,
// 2a - *
0b00010100,
0b00001000,
0b00111110,
0b00001000,
0b00010100,
// 2b - +
0b00000000,
0b00001000,
0b00011100,
0b00001000,
0b00000000,
// 2c - ,
0b01010000,
0b00110000,
// 2d - -
0b00000000,
0b00001000,
0b00001000,
0b00001000,
0b00000000,
// 2e - .
0b01100000,
0b01100000,
// 2f - /
0b00100000,
0b00010000,
0b00001000,
0b00000100,
0b00000010,
// 30 - 0
0b00111110,
0b01010001,
0b01001001,
0b01000101,
0b01111110,
// 31 - 1
0b01000100,
0b01000010,
0b01111111,
0b01000000,
0b01000000,
// 32 - 2
0b01000010,
0b01100001,
0b01010001,
0b01001001,
0b01000110,
// 33 - 3
0b00100001,
0b01001001,
0b01001101,
0b01001011,
0b00110001,
// 34 - 4
0b00010000,
0b00011000,
0b00010100,
0b00010010,
0b01111111,
// 35 - 5
0b00101111,
0b01001001,
0b01001001,
0b01001001,
0b00110001,
// 36 - 6
0b00111110,
0b01001001,
0b01001001,
0b01001001,
0b00110010,
// 37 - 7
0b01100001,
0b00010001,
0b00001001,
0b00000101,
0b00000011,
// 38 - 8
0b00110110,
0b01001001,
0b01001001,
0b01001001,
0b00110110,
// 39 - 9
0b00100110,
0b01001001,
0b01001001,
0b01001001,
0b00111110,
// 3a - :
0b00000000,
0b00110110,
0b00110110,
0b00000000,
// 3b - ;
0b00000000,
0b00110110,
0b01110110,
0b00000000,
// 3f - ?
0b00000010,
0b00000001,
0b01010001,
0b00001001,
0b00000110,
// 40 - @
0b00111110,
0b01000001,
0b01001101,
0b01010101,
0b01001110,
// 41 - A
0b01111110,
0b00001001,
0b00001001,
0b00001001,
0b01111110,
// 42 - B
0b01111111,
0b01001001,
0b01001001,
0b01001001,
0b00110110,
// 43 - C
0b00111110,
0b01000001,
0b01000001,
0b01000001,
0b01100010,
// 44 - D
0b01111111,
0b01000001,
0b01000001,
0b01000001,
0b00111110,
// 45 - E
0b01111111,
0b01001001,
0b01001001,
0b01001001,
0b01000001,
// 46 - F
0b01111111,
0b00001001,
0b00001001,
0b00001001,
0b00000001,
// 47 - G
0b00111110,
0b01000001,
0b01000001,
0b01010001,
0b01110010,
// 48 - H
0b01111111,
0b00001000,
0b00001000,
0b00001000,
0b01111111,
// 49 - I
0b01000001,
0b01111111,
0b01000001,
// 4a - J
0b00100000,
0b01000000,
0b01000001,
0b00111111,
0b00000001,
// 4b - K
0b01111111,
0b00001000,
0b00010100,
0b00100010,
0b01000001,
// 4c - L
0b01111111,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
// 4d - M
0b01111111,
0b00000010,
0b00001100,
0b00000010,
0b01111111,
// 4e - N
0b01111111,
0b00000100,
0b00001000,
0b00010000,
0b01111111,
// 4f - O
0b00111110,
0b01000001,
0b01000001,
0b01000001,
0b00111110,
// 50 - P
0b01111111,
0b00001001,
0b00001001,
0b00001001,
0b00000110,
// 51 - Q
0b00111110,
0b01000001,
0b01010001,
0b00100001,
0b01011110,
// 52 - R
0b01111111,
0b00001001,
0b00011001,
0b00101001,
0b01000110,
// 53 - S
0b00100110,
0b01001001,
0b01001001,
0b01001001,
0b00110010,
// 54 - T
0b00000001,
0b00000001,
0b01111111,
0b00000001,
0b00000001,
// 55 - U
0b00111111,
0b01000000,
0b01000000,
0b01000000,
0b00111111,
// 56 - V
0b00011111,
0b00100000,
0b01000000,
0b00100000,
0b00011111,
// 57 - W
0b00111111,
0b01000000,
0b00110000,
0b01000000,
0b00111111,
// 58 - X
0b01100011,
0b00010100,
0b00001000,
0b00010100,
0b01100011,
// 59 - Y
0b00000111,
0b00001000,
0b01110000,
0b00001000,
0b00000111,
// 5a - Z
0b01100001,
0b01010001,
0b01001001,
0b01000101,
0b01000011,
// 5b - [
0b01111111,
0b01000001,
0b01000001,
// 5d - ]
0b01000001,
0b01000001,
0b01111111,
// 61 - a
0b00100000,
0b01010100,
0b01010100,
0b01010100,
0b01111000,
// 62 - b
0b01111111,
0b01001000,
0b01001000,
0b01001000,
0b00110000,
// 63 - c
0b00111000,
0b01000100,
0b01000100,
0b01000100,
0b01000100,
// 64 - d
0b00110000,
0b01001000,
0b01001000,
0b01001000,
0b01111111,
// 65 - e
0b00111000,
0b01010100,
0b01010100,
0b01010100,
0b01011000,
// 66 - f
0b00001000,
0b01111110,
0b00001001,
0b00000010,
// 67 - g
0b01001000,
0b01010100,
0b01010100,
0b01010100,
0b00111100,
// 68 - h
0b01111111,
0b00001000,
0b00001000,
0b00001000,
0b01110000,
// 69 - i
0b01111010,
// 6a - j
0b00100000,
0b01000000,
0b01000000,
0b00111101,
// 6b - k
0b01111111,
0b00010000,
0b00101000,
0b01000100,
// 6c - l
0b01000001,
0b01111111,
0b01000000,
// 6d - m
0b01111100,
0b00000100,
0b00011000,
0b00000100,
0b01111100,
// 6e - n
0b01111100,
0b00001000,
0b00000100,
0b00000100,
0b01111000,
// 6f - o
0b00111000,
0b01000100,
0b01000100,
0b01000100,
0b00111000,
// 70 - p
0b01111100,
0b00010100,
0b00010100,
0b00010100,
0b00001000,
// 71 - q
0b00001000,
0b00010100,
0b00010100,
0b00010100,
0b01111100,
// 72 - r
0b01111100,
0b00001000,
0b00000100,
0b00000100,
0b00001000,
// 73 - s
0b01001000,
0b01010100,
0b01010100,
0b01010100,
0b00100100,
// 74 - t
0b00000100,
0b00111111,
0b01000100,
0b00100000,
// 75 - u
0b00111100,
0b01000000,
0b01000000,
0b01000000,
0b00111100,
// 76 - v
0b00011100,
0b00100000,
0b01000000,
0b00100000,
0b00011100,
// 77 - w
0b00111100,
0b01000000,
0b00110000,
0b01000000,
0b00111100,
// 78 - x
0b01000100,
0b00101000,
0b00010000,
0b00101000,
0b01000100,
// 79 - y
0b00001100,
0b01010000,
0b01010000,
0b01010000,
0b00111100,
// 7a - z
0b01000100,
0b01100100,
0b01010100,
0b01001100,
0b01000100
};
uint8_t charset_width[] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,3,5,5,5,5,2,3,3,5,5,2,5,2,5,5,5,5,5,5,5,5,5,5,5,4,4,0,0,0,5,5,5,5,5,5,5,5,5,5,3,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,3,0,3,0,0,0,5,5,5,5,5,4,5,5,1,4,4,3,5,5,5,5,5,5,5,4,5,5,5,5,5,5,0,0,0,0,0};
uint8_t charset_offset[] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,9,14,19,24,29,31,34,37,42,47,49,54,56,61,66,71,76,81,86,91,96,101,106,111,115,0,0,0,119,124,129,134,139,144,149,154,159,164,169,172,177,182,187,192,197,202,207,212,217,222,227,232,237,242,247,252,257,0,260,0,0,0,263,268,273,278,283,288,292,297,302,303,307,311,314,319,324,329,334,339,344,349,353,358,363,368,373,378,0,0,0,0,0};
