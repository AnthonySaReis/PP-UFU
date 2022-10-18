/*
46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
outro número formado pelos dígitos invertidos do número lido
*/
#include <stdio.h>

int main(){

    int numero, centena, dezena, unidade, invertido;
	printf("Entre com o valor inteiro de 3 digitos: ");
    scanf("%d", &numero);
    centena = numero/100; //para pegar o primeiro numero isolado
    dezena = (numero/10)%10; //para pegar o segundo numero isolado (divide por 10, para colocar a unidade e depois retirar a unidade de lá com o operador do resto)
    unidade =  numero%10; //para pegar o unico numero que não saiu nos outros (numero restante)
    invertido = (unidade*100) + (dezena*10) + centena; //para inverter centena com unidades, dezena com dezena e unidades com centenas... e, então, somar tudo msm
    printf("valor invertido: %d\n", invertido);

    return 0;
}
