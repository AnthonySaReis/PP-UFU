/*
53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
*/

#include <stdio.h>

int main(){

    float c, l, p, custo;
    printf("Entre com c e l (mesma linha, separado por espaco): ");
    scanf("%f %f", &c, &l);
    printf("Entre com o preco do metro de tela: ");
    scanf("%f", &p);
    custo = c*l*p;
    printf("O custo de cercar o terreno com o preco de tela e de: %0.2f reais", custo);
    return 0;
}