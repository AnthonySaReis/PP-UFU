/*
41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
calculado.
*/

#include <stdio.h>

int main(){
    float valor, hrs, total;
   	printf("Entre com os valores das horas trabalhadas e o valor da hora separado por espaco: ");
    scanf("%f %f", &valor, &hrs);
    total = (valor * hrs) * 1.1;//adicionando 10% sobre o valor calculado.
    printf("valor a receber %0.2f", total);
    return 0;
}
