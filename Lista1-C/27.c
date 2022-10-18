/*
27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2
. A
fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em
hectares.
*/
#include <stdio.h>

int main(){
    
    float h,m;
	printf("Entre com o valor em hectares: ");
	scanf("%f", &h);
	m = h*10000;
	printf("Em metros quadrados vale: %0.2f", m);

    return 0;
}
