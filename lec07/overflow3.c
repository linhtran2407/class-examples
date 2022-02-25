#include <stdio.h>

int main() {
  unsigned int a = 0;
  for (a = 5; a >= 0; a--) {
    printf("Message!\n"); // ! unsigned int never gets negative -> infinite loop
  }

  return 0;
}
