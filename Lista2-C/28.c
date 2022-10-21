/*28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica: 3√x*y*z
(b) Ponderada: (1*x + 2*y + 3*z) / 3
(c) Harmônica: 1/(1/x + 1/y + 1/z)
(d) Aritmética: (x + y + z) / 3
*/
#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z, opcao;
    float media;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);
    printf("Digite a opcao desejada\n: ");
    printf("Geometrica: a\n");
    printf("Ponderada: b\n");
    printf("Harmonica: c\n");
    printf("Aritmetica: d\n");
    scanf("%d", &opcao);
    while(x<0||y<0||z<0){
        printf("Valores invalidos, digite novamente (separados por espaco): ");
        scanf("%d %d %d", &x, &y, &z);
    }
    switch(opcao){
        case 'a':
            media = pow((x*y*z), 1/3);//raiz cubica é o mesmo que elevar a 1/3
            printf("Media geometrica: %0.2f", media);
            break;
        case 'b':
            media = (1*x + 2*y + 3*z) / 3;
            printf("Media ponderada: %0.2f", media);
            break;
        case 'c':
            media = 1/(1.0/x + 1.0/y + 1.0/z);
            printf("Media harmonica: %0.2f", media);
            break;
        case 'd':
            media = (x + y + z) / 3;
            printf("Media aritmetica: %0.2f", media);
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    return 0;
}