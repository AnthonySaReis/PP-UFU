/*29. Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou.*/
#include <stdio.h>

int main(){
    int a, b, resposta, resposta_correta, acertos=0;
    for(int i=0; i<5; i++){
        a = rand() % 100;
        b = rand() % 100;
        printf("Qual e a soma de %d + %d? ", a, b);
        scanf("%d", &resposta);
        resposta_correta = a + b;
        if(resposta == resposta_correta){
            printf("Resposta correta :) \n");
            acertos++;
        }
        else{
            printf("Resposta incorreta :( \n");
        }  
}
    printf("Voce acertou %d questoes", acertos);
    return 0;
}