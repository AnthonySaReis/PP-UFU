/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”*/
#include <stdio.h>

int main(){
    float salario, prestacao;
    printf("Entre com o salario: ");
    scanf("%f", &salario);
    printf("Entre com o valor da prestacao: ");
    scanf("%f", &prestacao);
    if(prestacao > (salario * 0.2)){
        printf("Emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }
    return 0;
}