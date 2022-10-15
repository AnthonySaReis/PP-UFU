/*
18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros
cúbicos.
*/


#include <stdio.h>

int main( ) {
	float m,l;
	scanf("%f", &m);
	l = m*1000;
	printf("Em litros vale: %0.2f", l);
	return 0;
}
