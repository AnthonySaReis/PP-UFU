/*
35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎^2 + b^2. Faça um programa que receba os valores de a e b e calcule o valor da
hipotenusa através da equação. Imprima o resultado dessa operação
*/
#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    float hipotenusa;
    scanf("%d %d", &a, &b);
    hipotenusa = sqrt((a*a)+(b*b)); //sqrt(raiz quadrada) função da biblioteca math.h
    printf("%0.2f", hipotenusa);
    return 0;
}