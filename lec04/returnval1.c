#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *code(int v)
{
  char msg[16];
  if (v == 0)
    strcpy(msg, "val0");
  else if (v == 1)
    strcpy(msg, "val1");
  else if (v == 2)
    strcpy(msg, "val2");
  return msg;
}

int main()
{
  (time(0));
  int val = rand() % 3;
  char *m = code(val);
  printf("%s\n", m);
  return 0;
}
