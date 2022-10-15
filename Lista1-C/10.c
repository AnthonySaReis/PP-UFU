/*
10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
em m/s.
*/


#include <stdio.h>

int main( ) {
	float k,m;
	scanf("%f", &k);
	m = k/3.6;
	printf("Em metros/s vale: %0.2f", m);
	return 0;
}
