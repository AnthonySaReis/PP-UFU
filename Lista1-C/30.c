/*
30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares.
*/
#include <stdio.h>

int main(){

    float real, cotacao, convertido;
   	printf("Entre com os valores (reais e cotacao) separados por espaco: ");
    scanf("%f %f", &real, &cotacao);
    convertido = real / cotacao;
    printf("o valor convertido fica: %0.2f", convertido);

    return 0;
}
