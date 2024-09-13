#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
int main() {
    int n;
    printf("entree entier positif pour fibonacci : ");
    scanf("%d",&n);
    if (n < 0) {
        printf("erreur : l'entier doit etre positif.\n");
    } else {
        printf(" la suite de Fibonacci est %d\n",fibonacci(n));
    }

    return 0;
}
