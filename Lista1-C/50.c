/*
50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.
*/
#include <stdio.h>

int main(){

    int idade, anoNascimento;
    int anoAtual = 2022; 
    scanf("%d", &anoNascimento);
    idade = anoAtual-anoNascimento;
    printf("%d", idade);
    return 0;
}