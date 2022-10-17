/*
16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.
*/


#include <stdio.h>

int main( ) {
	float p,c;
	scanf("%f", &p);
	c = p*2.54;
	printf("Em centimetros vale: %0.2f", c);
	return 0;
}
