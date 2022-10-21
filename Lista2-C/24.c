/*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.
*/
#include <stdio.h>

int main(){
    float valor;
    char estado;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite o estado de destino do produto (MG, SP, RJ ou MS): ");
    scanf(" %c", &estado);
    switch(estado){
        case 'MG':
            valor = valor * 1.07;
            printf("O valor final do produto e: %0.2f", valor);
            break;
        case 'SP':
            valor = valor *1.12;
            printf("O valor final do produto e: %0.2f", valor);
            break;
        case 'RJ':
            valor = valor * 1.15;
            printf("O valor final do produto e: %0.2f", valor);
            break;
        case 'MS':
            valor = valor * 1.08;
            printf("O valor final do produto e: %0.2f", valor);
            break;
        default:
            printf("Estado invalido");
            return 0;
    }   
    printf("O valor final do produto e: %.2f", valor);
    return 0;
}