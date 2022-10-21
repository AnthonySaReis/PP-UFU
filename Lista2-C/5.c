/*5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar*/
#include <stdio.h>

int main(){
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("O numero %d e par", num);
    }else{
        printf("O numero %d e impar", num);
    }
    return 0;
}