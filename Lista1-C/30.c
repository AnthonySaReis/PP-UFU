/*
30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares.
*/
#include <stdio.h>

int main(){

    float real, cotacao, convertido;
    scanf("%f %f", &real, &cotacao);
    convertido = real / cotacao;
    printf("%0.2f", convertido);

    return 0;
}