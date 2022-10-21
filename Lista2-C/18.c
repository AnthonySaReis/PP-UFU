/*18. Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/
#include <stdio.h>

int main(){
    int opcao;
    float num1, num2, resultado;
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    printf("Entre com o primeiro numero: ");
    scanf("%f", &num1);
    printf("Entre com o segundo numero: ");
    scanf("%f", &num2);
    switch(opcao){
        case 1:
            resultado = num1 + num2;
            printf("O resultado da soma e: %0.2f", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("O resultado da subtracao e: %0.2f", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("O resultado da multiplicacao e: %0.2f", resultado);
            break;
        case 4:
            resultado = num1 / num2;
            printf("O resultado da divisao e: %0.2f", resultado);
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}