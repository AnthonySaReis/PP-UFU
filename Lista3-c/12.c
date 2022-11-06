/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores 
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 
6 + 11 + 22 + 33 = 78*/

#include <stdio.h>

int main(){
 int numero, soma;

  printf("Informe um numero inteiro:");
  scanf("%d",&numero);
  printf("O numero informado foi %d\n",numero);

  soma = 1; // começamos de 1 pois todo número é divisível por 1 
  
  // loop começa de 2 e segue até mais ou menos a metade dele
  for (int i=2 ; i <= (numero/2.0+1) ; i++ ) {
    if ( numero % i == 0 ) {
      printf("%d - ",i);
      soma += i;
    }
  }
  printf("A soma dos divisores de %d (exceto ele mesmo) eh %d\n",numero,soma);
  return 0;
}
