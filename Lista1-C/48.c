/*
48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

#include <stdio.h>

int main(){

    int horas, minutos, segundos;
    scanf("%d", &segundos);
    horas = segundos/3600;
    minutos = (segundos/60) - (horas*60); //para eliminar as horas e deixar somente os minutos
    segundos = segundos%60; //recebe os segundos que ficaram para liberar minutos
    printf("%dh, %dm e %ds\n", horas, minutos, segundos);

    return 0;
}