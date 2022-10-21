/*22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/
#include <stdio.h>

int main(){
    int idade, tempoServico;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico: ");
    scanf("%d", &tempoServico);
    if(idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)){
        printf("O trabalhador pode se aposentar");
    }else{
        printf("O trabalhador nao pode se aposentar");
    }
    return 0;
}