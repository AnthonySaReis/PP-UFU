/*
44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
*/
#include <stdio.h>

int main(){

    float alturadoDegrau, alturaDesejada, quantosDegraus; 
	printf("Entre com a altura do degrau e a altura desejada: ");
    scanf("%f %f", &alturadoDegrau, &alturaDesejada);
    quantosDegraus = alturaDesejada/alturadoDegrau; //para descobrir quantos degraus terão que ser subidos
    printf("quatidade de degraus: %0.2f\n", quantosDegraus);

    return 0;
}
