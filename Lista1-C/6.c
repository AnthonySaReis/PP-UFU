/*
06. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.
*/


#include <stdio.h>

int main( ) {
	float c,f;
	scanf("%f", &c);
	f = (c*9)/5+32;
	printf("Em fahrenheit vale: %0.2f", f);
	return 0;
}
