/*27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:
            Categoria           Idade
            Infantil A          5 a 7
            Infantil B          8 a 10
            Juvenil A           11 a 13
            Juvenil B           14 a 17
            Sênior              maiores de 18 anos
*/
#include <stdio.h>

int main(){
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    while(idade<5){
        printf("Idade invalida, digite novamente: ");
        scanf("%d", &idade);
    }
    switch(idade){
        case 5 ... 7:
            printf("Infantil A");
            break;
        case 8 ... 10:
            printf("Infantil B");
            break;
        case 11 ... 13:
            printf("Juvenil A");
            break;
        case 14 ... 17:
            printf("Juvenil B");
            break;
        default:
            printf("Senior");
            break;
    }
    return 0;
}




