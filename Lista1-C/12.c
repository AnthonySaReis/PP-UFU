/*
12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.
*/


#include <stdio.h>

int main( ) {
	float k,m;
	printf("Entre com o valor em milhas: ");
	scanf("%f", &m);
	k = m*1.61;
	printf("Em quilometros vale: %0.2f", k);
	return 0;
}
