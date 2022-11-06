/*14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como 
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.*/
#include <stdio.h>

int main(){
    int i, n, d1, d2;
    printf("Digite o número de vezes que deseja lançar os dados: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        printf("Lançamento %d: d1 = %d, d2 = %d, ", i, d1, d2);
        if(d1 > d2){
            printf("d1 > d2\n");
        }else if(d1 < d2){
            printf("d1 < d2\n");
        }else{
            printf("d1 = d2\n");
        }
    }
    return 0;
}