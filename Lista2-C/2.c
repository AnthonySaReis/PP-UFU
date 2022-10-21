/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/
#include <stdio.h>
#include <math.h>

int main(){
    float num, raizNum;
    printf("Entre com um numero: ");
    scanf("%f", &num);
    if(num > 0){
        raizNum = sqrt(num);
        printf("A raiz quadrada de %0.2f e %0.2f", num, raizNum);
    }else{
        printf("O numero %f e invalido\n", num);
    }
    return 0;
}