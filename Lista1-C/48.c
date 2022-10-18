/*
48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

#include <stdio.h>

int main(){

    int horas, minutos, segundos;
	printf("Entre com o valor inteiro em segundos: ");
    scanf("%d", &segundos);
    horas = segundos/3600;
    minutos = (segundos/60) - (horas*60); //para eliminar as horas e deixar somente os minutos
    segundos = segundos%60; //recebe os segundos que ficaram para liberar minutos
    printf("%d h, %d m e %d s\n", horas, minutos, segundos);

    return 0;
}
