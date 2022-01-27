#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_point(int *x, int *y, int *z)
{
  srand(time(0));
  *x = rand() % 10;
  *y = rand() % 10;
  *z = rand() % 10;
}

void main()
{
  int x, y, z;
  rand_point(&x, &y, &z);
  printf("point: %d, %d, %d\n", x, y, z);
}
