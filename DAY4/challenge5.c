#include <stdio.h>
int factor(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factor(n - 1);
    }
}

int main() {
    int numb;
    printf("entrez nomber positif: ");
    scanf("%d", &numb);
    if (numb < 0) {
        printf("erreur : l'entier doit etre positif \n");
    } else {
        printf("factorielle de %d est %d \n", numb, factor(numb));
    }

    return 0;
}
