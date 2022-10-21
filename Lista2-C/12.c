/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.*/
#include <stdio.h>
#include <math.h>
int main(){
    int num;
    float logNum, logNum2;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    if(num > 0){
        logNum = log(num);//log natural
        logNum2 = log10(num);//log base 10
        printf("O logaritmo de %d e %0.2f (log natural) e %0.2f (log base 10)", num, logNum, logNum2);
    }else{
        printf("Numero invalido");
    }
    return 0;
}