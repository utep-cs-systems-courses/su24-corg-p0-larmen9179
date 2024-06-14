#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_arrow(int startCol, int squareSize, int triangleSize);
void print_char_5x7(char c);

extern const unsigned char font_5x7[][5];

#endif
