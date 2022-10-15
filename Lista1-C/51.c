/*
51. Escreva um programa que leia as coordenadas x e y de pontos no R
2 e calcule sua distância
da origem (0, 0).
FORMULA: distancia = √(xb-xa)^2+(yb-ya)^2
*/
#include <stdio.h>
#include <math.h>

int main(){

    float x, y;
    float distancia;
    printf("Entre com valores para x e y (separados por espaco): ");
    scanf("%f %f", &x, &y);
    distancia = sqrt((x*x)+(y*y)); //a conta termina aqui pois a origem é (0,0).
    printf("Distancia da origem %0.2f", distancia);
    return 0;
}