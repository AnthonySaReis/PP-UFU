/*17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 =
((basemaior + basemenor) ∗ altura )/ 2
*/
#include <stdio.h>

int main(){
    float baseMaior, baseMenor, altura, area;
    printf("Entre com a base maior: ");
    scanf("%f", &baseMaior);
    printf("Entre com a base menor: ");
    scanf("%f", &baseMenor);
    printf("Entre com a altura: ");
    scanf("%f", &altura);
    if(baseMenor<0){
        printf("Base menor invalida");
        return 0;
    }
    area = ((baseMaior + baseMenor) * altura) / 2;
    printf("A area do trapezio e: %0.2f", area);
    return 0;
}