#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    unsigned short rowBits = font_5x7[c][col];
    for (char row = 0; row < 7; row++) {
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

void print_char_up_5x7(char c)
{
  c -= 0x20;
  for (char row = 7; row >= 0; row--){
    unsigned short colMask = 1 << (6 - row);
    for (char col = 0; col < 5; col++){
      unsigned short rowBits = font_5x7[c][col];
      putchar( (rowBits & colMask) ? '*': ' ');
    }
    putchar('\n');
  }
      
      
}

void print_char_11x16(short c)
{
  c -= 0x20;
  for (char col = 0; col < 11; col++) {
    unsigned short rowBits = font_11x16[c][col];
    for (char row = 0; row < 16; row++) {
      unsigned short colMask = 1 << (15-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

void print_char_up_11x16(short c)
{
  c -= 0x20;
  for (char row = 16; row >= 0; row--){
    unsigned short colMask = 1 << (15 - row);
    for (char col = 0; col < 11; col++){
      unsigned short rowBits = font_11x16[c][col];
      putchar( (rowBits & colMask) ? '*': ' ');
    }
    putchar('\n');
  } 
}



  
