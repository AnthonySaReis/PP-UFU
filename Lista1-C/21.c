/*
21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.
*/
#include <stdio.h>

int main(){
    
    float k,l;
	scanf("%f", &l);
	k = l*0.45;
	printf("Em quilogramas vale: %0.2f", k);

    return 0;
}