#include <stdio.h>

int main() {
  int value1 = 0, value2 = 0;
  printf("Enter 2 values: \n");
  scanf(" %d", &value1);
  scanf(" %d", &value2);
// Enter 2 values: 
// 1
// 268500993
// Mask: 90000000 Value 1: 00000001 Value 2: 10010001 Result 1: 00000000 Result 2: 10000000
// Opposite signs
// value 1 first digit = 0 or 0000
// value 2 first digit = 1 or 0001
// mask first digit = 9 or 10001
// res 1 first digit = 0 & 1
// res 2 first digit = 1 & 1
  unsigned int mask = 0x80000000; // ! 0x80000000 = 0b 1000 0000 0000 .... 
  int result1 = mask & value1;
  int result2 = mask & value2;
  printf("Mask: %08X Value 1: %08X Value 2: %08X Result 1: %08X Result 2: %08X\n", mask, value1,  value2, result1, result2);
  if (result1 == result2) printf("Same sign\n");
  else printf("Opposite signs\n");
  
  return 0;
}

