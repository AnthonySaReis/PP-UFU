/*25. Calcule as raízes da equação de 2º grau.
Lembrando que:
𝑥 = −𝑏 ± √𝑏2 − 4𝑎𝑐
Onde
delta = 𝑏2 − 4𝑎𝑐
E ax2 + bx + c = 0 representa uma equação do 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
 Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 Se deta >= 0, imprima as duas raízes reais.*/
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - (4 * a * c);
    if(a == 0){
        printf("Nao e equacao de segundo grau");
        return 0;
    }else{
        if(delta < 0){
            printf("Nao existe raiz");
            return 0;
        }else if(delta == 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("Raiz unica: %0.2f", x1);
        }else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raiz 1: %0.2f\n", x1);
            printf("Raiz 2: %0.2f", x2);
}
    }
    return 0;
}