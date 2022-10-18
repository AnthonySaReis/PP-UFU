/*
08. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
*/

#include <stdio.h>

int main( ) {
	float c,k;
	printf("Entre com o valor em kelvin: ");
	scanf("%f", &k);
	c = k-273.15;
	printf("Em celsius vale: %0.2f", c);
	return 0;
}
