/*
42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
de imposto sobre o salário-base.
*/

#include <stdio.h>

int main(){

    float valor, salario;
	printf("Entre com o valor do salario base: ");
    scanf("%f", &valor);
    salario =valor * 1.05; //gradificação de 5%
    salario = salario - (salario * 0.07);//imposto sobre salario de 7%
    printf("valor a receber %0.2f", salario);
    return 0;
}
