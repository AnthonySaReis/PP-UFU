//05. Leia um número real e imprima a quinta parte deste número.


#include <stdio.h>

int main( ) {
	float n1,quintaParte;
	printf("Entre com o valor real: ");
	scanf("%f", &n1);
	quintaParte = n1/5;
	printf("A quinta parte vale: %0.2f", quintaParte);
	return 0;
}
