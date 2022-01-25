#include <stdio.h>

void print (const char* str){
  // iterate using len
  int n = strlen(str);
  for (int i = 0; i < n; i++){
    printf ("%c-", str[i]);  
  }

  // iterate until meet the null char at the end
  // of the string
  while (*str) {
    putchar(*str++);
  }
}

int main() {
  const char* greetings = "hello";
  print(greetings);
  return 0;
}