/*
20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.
*/


#include <stdio.h>

int main( ) {
	float k,l;
	printf("Entre com o valor em quilogramas: ");
	scanf("%f", &k);
	l = k/0.45;
	printf("Em libras vale: %0.2f", l);
	return 0;
}
