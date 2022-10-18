/*
25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2
. A
fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em
acres.
*/
#include <stdio.h>

int main(){
    
    float a,m;
	printf("Entre com o valor em acres: ");
	scanf("%f", &a);
	m = a*4048.58;
	printf("Em metros vale: %0.2f", m);

    return 0;
}
