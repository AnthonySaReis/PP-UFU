/*17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão 
necessários para que Zé seja maior que Chico*/
#include <stdio.h>
int main(){
    int i, chico, ze;
    chico = 150;
    ze = 110;
    for(i = 1; chico >= ze; i++){
        chico = chico + 2;
        ze = ze + 3;
    }
    printf("Chico tem %d cm e Ze tem %d cm\n", chico, ze);
    printf("Serao necessarios %d anos para que Ze seja maior que Chico\n", i);
    return 0;
}