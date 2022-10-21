/*38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto),
dia <= 30 em abril, junho, setembro e novembro, dia <= 31 nos outros meses. Teste a validade do
mês: mês > 0 e mês < 13. Teste a validade do ano: ano <= ano atual (use uma constante definida
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do
programa.
*/
#include <stdio.h>

int main(){
    int dia, mes, ano, anoAtual=2022;
    printf("Digite uma data (dia/mes/ano): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    //validez do mes e dia
    if(ano<=anoAtual){
        if(mes>=1 && mes<=12){
            if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){ //meses com 31 dias
                if(dia>=1 && dia<=31){
                    printf("Data valida");
                }
                else{
                    printf("Data invalida");
                }
            }
            else if(mes==4 || mes==6 || mes==9 || mes==11){//meses com 30 dias
                if(dia>=1 && dia<=30){
                    printf("Data valida");
                }
                else{
                    printf("Data invalida");
                }
            }
            else if(mes==2){ //fevereiro possui casos atípicos
                if(ano%4==0){ //ano bissexto
                    if(dia>=1 && dia<=29){
                        printf("Data valida");
                    }
                    else{
                        printf("Data invalida");
                    }
                }
                else{   //ano normal
                    if(dia>=1 && dia<=28){
                        printf("Data valida");
                    }
                    else{
                        printf("Data invalida");
                    }
                }
            }
        }
        else{
            printf("Data invalida");
        }
    }
    else{
        printf("Data invalida");
    }



    return 0;
}
