#include <limits.h>
#include <stdio.h>

float fat (int n) {
    if (n <= 1) return 1;
    return n * fat(n-1);
}
int fib (int n){
    if (n <= 1) return 1;
    return fib(n-1) + fib (n-2);
}
int soma_vet (int v[], int i, int tamanho) {
    if (i<tamanho) {
        return v[i] + soma_vet(v, i+1, tamanho);
    }
    return 0;
}
int soma_vet_invertido (int v[], int i) {
    if (i>0) 
        return v[i] + soma_vet_invertido(v, i-1);
    return v[i];
}

int main () {
    // printf ("maximo inteiro: %d\n", INT_MAX);
    for (int i=0; i<15; i++) {
        printf ("fatorial de %d: %.0f\n", i, fat(i));
    }

    // int a=1, b=1, c;
    // printf ("1 1 ");
    // int n = 2;
    // while (n<=20) {
    //     c = a + b;
    //     printf ("%d ", c);
    //     a = b;
    //     b = c;
    //     n++;
    // }

    // for (int i=1; i<=46; i++) {
    //     printf ("fibonacci em %d: %d\n", i, fib(i));
    // }

    int v[5];
    // int s=0;
    for (int i=0; i<5; i++) {
        v[i] = i+1;
    //     s += v[i];
    }
    // printf("%d\n", s);
    printf ("%d\n", soma_vet(v, 0, 5));

    printf ("%d\n", soma_vet_invertido(v, 4));
    return 0;
}