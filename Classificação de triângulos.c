#include <stdio.h>
int main(void) {
    float a, b ,c;
    printf("Lados dos triangulos: ");
    scanf("%f %f %f",&a, &b, &c);
    if(a<b+c && b<a+c && c<a+b) {
        printf("Triangulo: ");
        if(a==b && b==c) puts("Equilatero");
        else if(a==b || a==c || b==c) puts("Isosceles");
        else puts("Escaleno");
    }
    else puts("Nao e triangulo!");
    return 0;
}