/*
17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.

*/


#include <stdio.h>

int main( ) {
	float c,p;
	scanf("%f", &c);
	p = c/2.54;
	printf("Em polegadas vale: %0.2f", p);
	return 0;
}
