/*1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando 
números maiores que 0.*/

#include <stdio.h>

int main(){
    int i, j;
    for(i = 1; i <= 5; i++){
        j = i * 3;
        printf("%d\n", j);
    }
    return 0;
}