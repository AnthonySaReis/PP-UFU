/*19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de 
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com 
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
*/
#include <stdio.h>

int main(){
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, saque;
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);
    i = saque / 100;
    j = saque % 100;
    k = j / 50;
    l = j % 50;
    m = l / 20;
    n = l % 20;
    o = n / 10;
    p = n % 10;
    q = p / 5;
    r = p % 5;
    s = r / 2;
    t = r % 2;
    u = t / 1;
    v = t % 1;
    w = i + k + m + o + q + s + u;
    printf("Serão necessárias %d notas para atender ao saque.\n", w);
    printf("Notas de 100: %d\n", i);
    printf("Notas de 50: %d\n", k);
    printf("Notas de 20: %d\n", m);
    printf("Notas de 10: %d\n", o);
    printf("Notas de 5: %d\n", q);
    printf("Notas de 2: %d\n", s);
    printf("Notas de 1: %d\n", u);
    return 0;
}