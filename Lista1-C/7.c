/*
07. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
temperatura em Fahrenheit.
*/


#include <stdio.h>

int main( ) {
	float c,f;
	scanf("%f", &f);
	c = 5*(f-32)/9;
	printf("Em celsius vale: %0.2f", c);
	return 0;
}
