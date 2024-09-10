#include <stdio.h>

int main() {
    int a,b,S;
    printf("entrez le premier nombre : ");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d",&b);
    if (a == b) {
        S = 3 * (a + b);
    } else {
        S = a + b;
    }
    printf("le rsultat est : %d\n",S);

    return 0;
}
