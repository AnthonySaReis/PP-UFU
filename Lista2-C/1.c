/*1. Faça um programa que receba dois números e mostre qual deles é o maior.*/
#include <stdio.h>

int main(){
    int num1, num2;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("O primeiro %d numero e maior que o segundo %d numero", num1, num2);
    }else{
        printf("O segundo %d numero e maior que o primeiro %d numero", num2, num1);
    }
    return 0;
}