/*
36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
cilindro circular é calculado por meio da seguinte fórmula: V = PI * raio^2 * altura, onde PI =
3.141592.
*/
#include <stdio.h>

int main(){

    float altura, raio, V, PI = 3.141592;
   	printf("Entre com os valores da altura e raio separados por espaco: ");
    scanf("%f %f", &altura, &raio);
    V = PI * (raio*raio) * altura;
    printf("o volume vale %0.2f", V);
    return 0;
}
