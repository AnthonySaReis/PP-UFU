/*
49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma
*/

#include <stdio.h>

int main(){

    int horaInicial, minInicial, segInicial, horaFinal, minFinal, segFinal, durSegundos;
    printf("Entre com horas na primeira linha, minutos na segunda, segundos na terceira e a duracao em segundos na ultima: \n");
    scanf("%d\n%d\n%d\n %d", &horaInicial, &minInicial, &segInicial, &durSegundos);
    
    //caso so haja alteração nos segundos
    segFinal = segInicial + durSegundos;
    minFinal= minInicial;
    horaFinal = horaInicial;
    
    //controle de tempo para situações em que há mais de um minuto ou mais de uma hora na duração
    while(segFinal>59){
        minFinal++;
        segFinal -= 60;
        horaFinal = horaInicial;}

    if(minFinal>59){
    horaFinal = horaInicial+1;
    minFinal=minFinal-60;    }



    printf("Hora final: %d horas, %d minutos e %d segundos", horaFinal, minFinal, segFinal);

    return 0;
}
