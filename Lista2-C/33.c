/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
segunda tabela).
PREÇO ANTIGO                        PERCENTUAL DE AUMENTO
até R$ 50                                   5%
entre R$ 50 e R$ 100                        10%
acima de R$ 100                             15%

PREÇO NOVO                              MENSAGEM
até R$ 80                               Barato
entre R$ 80 e R$ 120 (inclusive)        Normal
entre R$ 120 e R$ 200 (inclusive)       Caro
acima de R$ 200                         Muito caro
*/
#include <stdio.h>

int main(){
    float precoAntigo, precoNovo;
    printf("Digite o preco antigo: ");
    scanf("%f", &precoAntigo);
    if(precoAntigo<=50){
        precoNovo = precoAntigo*1.05;
    }
    else if(precoAntigo>50&&precoAntigo<=100){
        precoNovo = precoAntigo*1.1;
    }
    else{
        precoNovo = precoAntigo*1.15;
    }
    if(precoNovo<=80){
        printf("Ficou barato: %0.2f", precoNovo);
    }else if(precoNovo>80&&precoNovo<=120){
        printf("Ficou normal: %0.2f", precoNovo);
    }else if(precoNovo>120&&precoNovo<=200){
        printf("Ficou caro: %0.2f", precoNovo);
    }else{
        printf("Muito caro!! %0.2f", precoNovo);
    }
    return 0;
}