/*22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois 
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois 
dígitos é 9009 = 91*99.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, prod, numInverso = 0, temp, quantDig = 0, cifra, maiorPalindromo = 0, fatorMaior1, fatorMaior2;

    /*
        num1 -> 1º Numero de tres digitos
        num2 -> 2º Numero de tres digitos
        prod -> Produto entre o 1º e 2º numeros
        temp -> Temporaria utilizada para contagem de digitos do produto e para inverter o produto
        quantDig -> Quantidade de digitos do produto
        cifra -> Um algarismo do produto (Utilizada para inverter o produto)
        maiorPalindromo -> O maior palindromo formado pelo produto
        fatorMaior1 e fatorMaior2 -> Sao os fatores que resultam no maior numero palindromo

    */

    for (num1 = 999; num1 >= 100; num1--) {
        for (num2 = num1; num2 >= 100; num2--) {
            prod = num1 * num2;

            if (prod > maiorPalindromo) {
                // Contagem de digitos do produto
                temp = prod;
                while (temp != 0) {
                    quantDig++;
                    temp /= 10;
                }

                // Inversao do produto
                temp = prod;
                numInverso = 0;
                while(temp != 0) {
                    cifra = temp % 10;
                    numInverso += cifra * pow(10, quantDig - 1);
                    temp /= 10;
                    quantDig--;
                }

                // Comparacao se eh um numero palindromo
                if (prod == numInverso) {
                    maiorPalindromo = numInverso;
                    fatorMaior1 = num1;
                    fatorMaior2 = num2;
                }
            }
        }
    }

    printf("O maior palindromo eh formado pela multiplicacao de %d x %d = %d\n\n", fatorMaior1, fatorMaior2, maiorPalindromo);


    return 0;
}