/*
52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
prêmio com base no valor investido.
*/
#include <stdio.h>

int main(){

    float valorAmigo1, valorAmigo2, valorAmigo3,valorPremio, valorTotal;
    printf("Entre com o valor de apostas dos 3 amigos na mesma linha (separado por espaco): \n");
    scanf("%f %f %f %f", &valorAmigo1, &valorAmigo2, &valorAmigo3, &valorPremio);
    valorTotal = valorAmigo1 + valorAmigo2 + valorAmigo3;
    valorAmigo1 = (valorAmigo1/valorTotal)*valorPremio;
    valorAmigo2 = (valorAmigo2/valorTotal)*valorPremio;
    valorAmigo3 = (valorAmigo3/valorTotal)*valorPremio;
    printf("O amigo 1 ganharia %0.2f, o amigo 2 ganharia %0.2f, e o amigo 3 ganharia %0.2f do valor da aposta total", valorAmigo1, valorAmigo2, valorAmigo3);
    return 0;
}