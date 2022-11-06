/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido*/

#include <stdio.h>

int main(){
    int i, j, k, l, m, n, o, p, q, r, maior;
    printf("Digite 10 numeros inteiros: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &i, &j, &k, &l, &m, &n, &o, &p, &q, &r);
    if(i > j && i > k && i > l && i > m && i > n && i > o && i > p && i > q && i > r){
        maior = i;
    }
    else if(j > i && j > k && j > l && j > m && j > n && j > o && j > p && j > q && j > r){
        maior = j;
    }
    else if(k > i && k > j && k > l && k > m && k > n && k > o && k > p && k > q && k > r){
        maior = k;
    }
    else if(l > i && l > j && l > k && l > m && l > n && l > o && l > p && l > q && l > r){
        maior = l;
    }
    else if(m > i && m > j && m > k && m > l && m > n && m > o && m > p && m > q && m > r){
        maior = m;
    }
    else if(n > i && n > j && n > k && n > l && n > m && n > o && n > p && n > q && n > r){
        maior = n;
    }
    else if(o > i && o > j && o > k && o > l && o > m && o > n && o > p && o > q && o > r){
        maior = o;
    }   
    else if(p > i && p > j && p > k && p > l && p > m && p > n && p > o && p > q && p > r){
        maior = p;
    }
    else if(q > i && q > j && q > k && q > l && q > m && q > n && q > o && q > p && q > r){
        maior = q;
    }
    else if(r > i && r > j && r > k && r > l && r > m && r > n && r > o && r > p && r > q){
        maior = r;
    }
    printf("O maior numero digitado eh: %d", maior);

    return 0;
}