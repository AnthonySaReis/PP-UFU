/*7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("O maior numero e: %d", num1);
    }else if(num1 < num2){
        printf("O maior numero e: %d", num2);
    }else{
        printf("Numeros iguais");
    }
    return 0;
}