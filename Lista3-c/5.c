/*5. Faça um programa que peça ao usuário para digitar 10 valores e some-os*/

#include <stdio.h>

int main(){
    int i, soma = 0, valor;
    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        soma += valor;
    }
    printf("A soma dos valores digitados eh: %d\n", soma);
    return 0;
}