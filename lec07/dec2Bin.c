#include <stdio.h>

int main() {
    unsigned int a;
    printf("Enter a positive decimal: ");
    scanf(" %d", &a);
    printf("\n");
    while (a != 0) {
        printf("%d, %d\n", a, a % 2);
        a = a>>1;
    }
    return 0;
}
