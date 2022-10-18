/*
33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/
#include <stdio.h>

int main(){

    int lado;
   	printf("Entre com o valor do lado: ");
    scanf("%d", &lado);
    printf("a area ficou %d", (lado*lado)); //l*l = area do quadrado
    return 0;
}
