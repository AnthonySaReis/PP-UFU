/*34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
área do círculo é PI*raio2
, considere PI = 3.141592.
*/

#include <stdio.h>

int main(){

    float raio, area, PI=3.141592;
    scanf("%f", &raio);
    area = PI * (raio*raio); //area do círculo = PI*raio2
    printf("%0.2f", area);
    return 0;
}