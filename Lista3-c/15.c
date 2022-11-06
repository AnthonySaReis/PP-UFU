/*15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e 
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada 
de dados com um valor negativo ou zero.*/
#include <stdio.h>

int main(){
    int i, j, k;
    printf("Digite um número: ");
    scanf("%d", &i);
    while(i > 0){
        j = i * i;
        k = i * i * i;
        printf("O quadrado de %d é %d e o cubo é %d.\n", i, j, k);
        printf("Digite um número: ");
        scanf("%d", &i);
    }
    return 0;
}