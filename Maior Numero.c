#include <stdio.h>
int main(void) {
    int a, b;
    printf("Numeros? ");
    scanf("%d %d", &a, &b);
    printf("Maior = %d\n", (a>b ? a : b));
    return 0;
}