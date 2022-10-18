/*
24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
acres.
*/
#include <stdio.h>

int main(){
    
    float a,m;
	printf("Entre com o valor em metros quadrados: ");
	scanf("%f", &m);
	a = m*0.000247;
	printf("Em acres vale: %0.2f", a);

    return 0;
}
