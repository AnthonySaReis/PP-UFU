/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/
#include <stdio.h>
int main(){
    int i, j;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &i);
    for(j = 0; j <= i; j++){
        printf("%d\n", j);
    }
    return 0;
}