/*31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostra qual a classificação dessa pessoa.
Altura                                      Peso
                        Até 60      Entre 60 e 90 (Inclusive)       Acima de 90
Menor que 1,20          A                   D                               G
De 1,20 a 1,70          B                   E                               H
Maior que 1,70          C                   F                               I
*/
#include <stdio.h>

int main(){
    float altura, peso;
    printf("Digite a altura e o peso da pessoa: ");
    scanf("%f %f", &altura, &peso);
    if(altura<1.2){
        if(peso<=60){
            printf("A");
        }
        else if(peso<=90){
            printf("D");
        }
        else{
            printf("G");
        }
    }
    else if(altura<=1.7){
        if(peso<=60){
            printf("B");
        }
        else if(peso<=90){
            printf("E");
        }
        else{
            printf("H");
        }
    }
    else{
        if(peso<=60){
            printf("C");
        }
        else if(peso<=90){
            printf("F");
        }
        else{
            printf("I");
        }
    }
    return 0;
}