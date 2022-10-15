/*
23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
*/
#include <stdio.h>

int main(){
    
    float j,m;
	scanf("%f", &m);
	j = m/0.91;
	printf("Em jardas vale: %0.2f", j);

    return 0;
}