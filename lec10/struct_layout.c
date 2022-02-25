#include <stdio.h>

struct mystery {
  char c;
  char c2;
  float d;
  double a[4]; // ! 8 bytes
  float q[4]; // ! 4 bytes
};

int main() {
  struct mystery m;
  printf("sizeof(mystery} = %lu bytes\n", sizeof(struct mystery));
  printf("mystery.c    - %p\n", &(m.c)); // 00
  printf("mystery.c2    - %p\n", &(m.c2)); // 01 -> round to 4 bytes
  printf("mystery.d    - %p\n", &(m.d)); // 04 
  printf("mystery.a[0] - %p\n", &(m.a[0])); // 08
  printf("mystery.a[1] - %p\n", &(m.a[1]));  // 10
  printf("mystery.a[2] - %p\n", &(m.a[2]));
  printf("mystery.a[3] - %p\n", &(m.a[3]));
  printf("mystery.q[0] - %p\n", &(m.q[0]));
  printf("mystery.q[1] - %p\n", &(m.q[1])); 
  printf("mystery.q[2] - %p\n", &(m.q[2]));
  printf("mystery.q[3] - %p\n", &(m.q[3]));
  return 0;
}
