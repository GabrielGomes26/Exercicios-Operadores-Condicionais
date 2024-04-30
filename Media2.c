#include <stdio.h>
#include <math.h>
int main(void){
    int faltas;
    float p1, p2, m;
    printf("Notas p1 e p2: ");
    scanf("%f %f", &p1, &p2);
    m = (p1+p2)/2;
    printf("Digite o numero de faltas do aluno: ");
    scanf("%d", &faltas);
    if(m>=6 && faltas<=5) puts("Aprovado");
    else if(faltas>5) puts("Reprovado por faltas");
    else if(m<4 && faltas<=5) puts("Reprovado por nota");
    else if(m>=4 && m<6) puts("Recuperacao");
    return 0;
}