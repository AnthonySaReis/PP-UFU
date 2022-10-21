/*13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.*/
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);
    printf("Entre com a terceira nota: ");
    scanf("%f", &nota3);
    media = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / 4; //nota * peso / total de pesos
    printf("A media das notas %0.2f, %0.2f e %0.2f e %0.2f\n", nota1, nota2, nota3, media);
    if(media >= 60){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    return 0;
}