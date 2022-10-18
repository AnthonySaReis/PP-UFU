/*
45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.
*/
#include <stdio.h>

int main(){

    char letra;
	printf("Entre com a letra maiuscula: ");
    scanf("%c", &letra);
    printf("letra minuscula: %c", letra + 32); //somar ou subtrais 32 muda entre maiúscula e minúscula (tabela ASCII)
    return 0;
}
