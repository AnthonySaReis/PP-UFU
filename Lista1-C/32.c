/*
32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.
*/
#include <stdio.h>

int main(){

    int num, soma;
   	printf("Entre com o valor inteiro: ");
    scanf("%d", &num);
    soma = ((num*3)+1)+((num*2)-1);
    printf("%d", soma);
    return 0;
}
