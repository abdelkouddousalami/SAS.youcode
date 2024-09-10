#include <stdio.h>

int main() {
    int numb;
    printf("veuilez entre votre nomber : ");
    scanf("%d", &numb);

    if (numb > 0) {
        printf("positif\n");
    } else if (numb < 0) {
        printf("negatif\n");
    } else {
        printf("nuul\n");
    }

    return 0;
}
