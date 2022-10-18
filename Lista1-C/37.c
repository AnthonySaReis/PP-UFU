/*
37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%.
*/
#include <stdio.h>

int main(){

    float valor, total;
   	printf("Entre com o valor: ");
    scanf("%f", &valor);
    total = valor * 0.88; // ou total = valor - (valor*0.12);
    printf("valor com desconto %0.2f", total);
    return 0;
}
