/*
29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("%0.2f", media);
    return 0;
}