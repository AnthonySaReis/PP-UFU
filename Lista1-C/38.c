/*
38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
recebeu um aumento de 25%.
*/

#include <stdio.h>

int main(){
    float salario, aumento;
   	printf("Entre com o valor do salario: ");
    scanf("%f", &salario);
    aumento = salario * 1.25; //1.25 = 125% de aumento
    printf("valor com aumento %0.2f", aumento); 
    return 0;
}
