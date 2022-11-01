/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7*/
#include <stdio.h>

int main(){
    float altura, pesoIdeal;
    char sexo;
    printf("Entre com a altura: ");
    scanf("%f", &altura);
    printf("Entre com o sexo (h pra Homem ou m pra Mulher): ");
    scanf(" %c", &sexo);
    if(sexo == 'h' || sexo == 'H'){
        pesoIdeal = (72.7 * altura) - 58.0;
        printf("O peso ideal e: %0.2f", pesoIdeal);
    }else if(sexo == 'h' || sexo == 'H'){
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("O peso ideal e: %0.2f", pesoIdeal);
    }else{
        printf("Sexo invalido");
    }
    return 0;
}
