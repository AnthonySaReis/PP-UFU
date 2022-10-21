/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
o número ao quadrado*/
#include <stdio.h>
#include <math.h>

int main(){
    float num, raizNum, quadradoNum;
    printf("Entre com um numero: ");
    scanf("%f", &num);
    if(num > 0){
        raizNum = sqrt(num);
        printf("A raiz quadrada de %0.2f e %0.2f", num, raizNum);
    }else{
        quadradoNum = pow(num, 2);
        printf("O numero %f ao quadrado e %f", num, quadradoNum);
    }
    return 0;
}