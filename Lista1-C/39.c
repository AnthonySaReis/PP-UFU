/*
39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
#include <stdio.h>

int main(){
    float total = 780.000, primeiro, segundo, terceiro;
    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total * 0.22;
    printf("Primeiro: %0.2f, Segundo: %0.2f e Terceiro: %0.2f", primeiro, segundo, terceiro);

    return 0;
}