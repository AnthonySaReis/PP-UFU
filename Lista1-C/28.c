/*
28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos.
*/
#include <stdio.h>

int main(){
    int num1, num2, num3, soma;
    scanf("%d %d %d", &num1, &num2, &num3);
    soma = (num1 * num1) + (num2 * num2) + (num3 * num3);
    printf("%d", soma);
    return 0;
}