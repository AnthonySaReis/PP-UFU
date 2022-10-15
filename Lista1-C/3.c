//03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main( ) {
	int n1,n2,n3,soma;
	printf("Insira tres numeros inteiros (separados por espacos): ");
	scanf("%d %d %d", &n1,&n2,&n3);
	soma = (n1+n2+n3);
	printf("Os numeros somados valem: %d", soma);
	return 0;
}
