/*
43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3x sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
*/
#include <stdio.h>

int main(){

    float valor, desconto, parcela, comissaoVista, comissaoParcela;
	printf("Entre com o valor total: ");
    scanf("%f", &valor);
    desconto = valor * 0.9; //desconto de 10%
    printf("valor com desconto %0.2f\n", desconto);
    parcela = valor/3; //o valor de cada parcela, no parcelamento de 3x sem juros
    printf("valor de cada parcela %0.2f\n", parcela);
    comissaoVista = desconto * 1.05; //a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
    printf("comissao em caso de compra a vista %0.2f\n", comissaoVista);
    comissaoParcela = valor * 1.05; //a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
    printf("comissao em caso de compra parcelada %0.2f", comissaoParcela);
    return 0;
}
