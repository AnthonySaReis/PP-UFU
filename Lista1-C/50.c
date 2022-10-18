/*
50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.
*/
#include <stdio.h>

int main(){

    int idade, anoNascimento;
    int anoAtual = 2022; 
	printf("Entre com o valor do ano de nascimento: ");
    scanf("%d", &anoNascimento);
    idade = anoAtual-anoNascimento;
    printf("idade: %d", idade);
    return 0;
}
