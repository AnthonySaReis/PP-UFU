/*32. Escrever um programa que leia o código do produto escolhido do cardápio de uma
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete
segue o padrão abaixo:

Especificação                       Código                        Preço
Cachorro Quente                     100                            1,20
Bauru Simples                       101                            1,30
Bauru com Ovo                       102                            1,50
Hambúrguer                          103                            1,20
Cheeseburguer                       104                            1,70
Suco                                105                            2,20
Refrigerante                        106                            1,00*/

#include <stdio.h>

int main(){
    int codigo, quantidade;
    float preco, valorPago;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    switch(codigo){
        case 100:
            preco = 1.2;
            break;
        case 101:
            preco = 1.3;
            break;
        case 102:
            preco = 1.5;
            break;
        case 103:
            preco = 1.2;
            break;
        case 104:
            preco = 1.7;
            break;
        case 105:
            preco = 2.2;
            break;
        case 106:
            preco = 1.0;
            break;
        default:
            printf("Codigo invalido");
            break;
    }
    valorPago = preco*quantidade;
    printf("Valor a ser pago: %0.2f", valorPago);
    return 0;
}