/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include <stdio.h>

int main(){
    int i, j, k;
    for(i = 1; i <= 50; i++){
        j = i * 2;
        k = k + j;
    }
    printf("%d\n", k);
    return 0;
}