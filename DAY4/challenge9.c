#include <stdio.h>
int verifierParite(int numb) {
    if (numb % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numb;
        printf("Entrez un nombre entier : ");
    scanf("%d", &numb);

    int estPair = verifierParite(numb);

    if (estPair) {
        printf("%d est pair.\n",numb);
    } else {
        printf("%d est impair.\n",numb);
    }

    return 0;
}
