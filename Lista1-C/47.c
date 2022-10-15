/*
47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

#include <stdio.h>

int main(){

    int numero, milhar, centena, dezena, unidade;
    scanf("%d", &numero);
    //verificação de numero para evitar erros
    while(numero<1000 || numero > 9999){
        printf("Por favor insira um numero valido para a operacao\n");
        scanf("%d", &numero);
    }
    milhar = numero / 1000;
    centena = (numero/100)%10;
    dezena = (numero/10)%10;
    unidade = numero % 10;
    printf(" %d\n %d\n %d\n %d", milhar, centena, dezena, unidade);

    return 0;
}