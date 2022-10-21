/*20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes;
*/

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    if(a < b + c && b < a + c && c < a + b){
        if(a == b && b == c){
            printf("Triangulo equilatero");
        }else if(a == b || b == c || a == c){
            printf("Triangulo isosceles");
        }else{
            printf("Triangulo escaleno");
        }
    }else{
        printf("Nao e um triangulo");
    }
    return 0;
}