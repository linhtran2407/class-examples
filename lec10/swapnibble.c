#include <stdio.h>

int main () {
    unsigned char a = 0xAB;
    unsigned char leftMask = 0xF0;
    unsigned char rightMask = 0x0F;
    unsigned char left = a & leftMask; // ! A0 - &  F is like & 1, result is the value
    unsigned char right = a & rightMask; // 0B
    unsigned char leftShift = left >> 4; // 0A
    unsigned char rightShift = right << 4; // B0
    unsigned char flip = leftShift | rightShift; // ! | 0 will give the value itself
    printf("Left: %02X, Right: %02X\n", left, right);
    printf("LeftShift: %02X, RightShift: %02X\n", leftShift, rightShift);
    printf("Before: %02X, After: %02X\n", a, flip);
    return 0;
}