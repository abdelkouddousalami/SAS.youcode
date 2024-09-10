#include <stdio.h>

int main() {
    int numb;
    printf("entrez un nombre: ");
    scanf("%d", &numb);

    if (numb % 2 == 0) {
        printf("Le nombre %d est pair.\n", numb);
    } else {
        printf("Le nombre %d est impair.\n", numb);
    }

    return 0;
}
