/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);
    printf("Entre com a terceira nota: ");
    scanf("%f", &nota3);
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10; //nota * peso / total de pesos
    printf("A media das notas %0.2f, %0.2f e %0.2f e %0.2f\n", nota1, nota2, nota3, media);
    if(media >= 0 && media <= 2.9){
        printf("Reprovado");
    }else if(media >= 3 && media <= 4.9){
        printf("Recuperacao");
    }else if(media >= 5 && media <= 10){
        printf("Aprovado");
    }else{
        printf("Nota invalida");
    }
    return 0;
}