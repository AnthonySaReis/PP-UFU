/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 O número digitado ao quadrado
 A raiz quadrada do número digitado*/
#include <stdio.h>
#include <math.h>

int main(){
    float num, quadradoNum, raizNum;
    printf("Entre com um numero: ");
    scanf("%f", &num);
    if(num > 0){
        quadradoNum = pow(num, 2);
        raizNum = sqrt(num);
        printf("O numero %0.2f ao quadrado e %0.2f\n", num, quadradoNum);
        printf("A raiz quadrada de %0.2f e %0.2f", num, raizNum);
    }else{
        printf("O numero %0.2f e invalido", num);
    }
    return 0;
}