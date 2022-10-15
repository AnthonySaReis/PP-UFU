//04. Leia um número real e imprima o resultado do quadrado desse número.

#include <stdio.h>

int main( ) {
	float n1,quadrado;
	scanf("%f", &n1);
	quadrado = n1*n1;
	printf("o quadrado vale: %0.2f", quadrado);
	return 0;
}
