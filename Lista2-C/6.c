/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.*/

#include <stdio.h>

int main(){
    int num1, num2, diferenca;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if(num1 > num2){
        diferenca = num1 - num2;
        printf("O maior numero e: %d", num1);
}