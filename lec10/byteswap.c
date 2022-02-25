#include <stdio.h>

int main() {
  unsigned int a = 0xAABB; // ! 4 bits/1 digit -> AABB 16 bits = 0b 1010 1010 1011 1011
  unsigned int leftMask = 0xFF00; // ! 0b 1111 1111 0000 0000 -> zero out BB
  unsigned int rightMask = 0x00FF;// ! 0b 0000 0000 1111 1111 -> zero out AA
  unsigned int left = (leftMask & a) ;
  unsigned int right = (rightMask & a) ;
  unsigned int leftShift = left >> 8; // ! shift right --> 8 bits (2 digits) AA00: 1010 1010 0000 0000 --> 00AA: 0000 0000 1010 1010 
  unsigned int rightShift = right << 8;
  unsigned flipped = leftShift | rightShift;

  printf("Left: %08X Right: %08X\n", left, right); // ! print out 8 digits (16 bits) 
  printf("Left: %08X Right: %08X\n", leftShift, rightShift);
  printf("Before: %08X After: %08X\n", a, flipped);
}
 