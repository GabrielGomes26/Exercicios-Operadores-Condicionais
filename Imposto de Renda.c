#include <stdio.h>
int main(void){
    float salario, IR, valor;
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);
    if(salario<=1903.98) IR = 0;
    else if(salario>1903.98 && salario<=2826.65) IR = 0.075;
    else if(salario>2826.65 && salario<=3751.05) IR = 0.15;
    else if(salario>3751.05 && salario<=4664.68) IR = 0.225;
    else IR = 0.275;
    valor = salario - (salario*IR);
    printf("Aliquota e valor do imposto de renda: (%.1f por cento) %.2f\n", IR*100, salario*IR);
    printf("Salario com o desconto do IR: %.2f", valor);
    return 0;
}