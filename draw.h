#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_arrow(int startCol, int squareSize, int triangleSize);

//function for bitmap preset
void print_char_5x7(char c);
void print_char_up_5x7(char c);

//functions for different bitmap font
void print_char_11x16(short c);
void print_char_up_11x16(short c);

extern const unsigned char font_5x7[][5];

//declaration for font from 11x16font.c
extern const unsigned short font_11x16[][11];

#endif
