/*
40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.
*/

#include <stdio.h>

int main(){
    float valor = 30, dia, total;
    scanf("%f", &dia);
    total = (valor*dia)*0.92; //sabendo que são descontados 8% para imposto de renda.
    printf("%0.2f", total);

    return 0;
}