/*7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua 
média.
*/
#include <stdio.h>

int main(){
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    float media;
    printf("Digite 10 numeros inteiros positivos: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &i, &j, &k, &l, &m, &n, &o, &p, &q, &r);
    if(i < 0){
        i = 0;
    }
    if(j < 0){
        j = 0;
    }
    if(k < 0){
        k = 0;
    }
    if(l < 0){
        l = 0;
    }
    if(m < 0){
        m = 0;
    }
    if(n < 0){
        n = 0;
    }
    if(o < 0){
        o = 0;
    }
    if(p < 0){
        p = 0;
    }
    if(q < 0){
        q = 0;
    }
    if(r < 0){
        r = 0;
    }
    s = i + j + k + l + m + n + o + p + q + r;
    media = s / 10;
    printf("A media dos numeros digitados eh: %0.2f", media);
    return 0;
}