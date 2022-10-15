/*
31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/
#include <stdio.h>

int main(){

    int num, antecessor, sucessor;
    scanf("%d", &num);
    antecessor = num-1;
    sucessor = num+1;
    printf("%d e %d", antecessor, sucessor);

    return 0;
}