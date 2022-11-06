/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main(){
    int i, valor, media, soma = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        soma += valor;
        media = soma/10;
    }
    printf("A média dos valores digitados eh: %d\n", media);
    return 0;
}