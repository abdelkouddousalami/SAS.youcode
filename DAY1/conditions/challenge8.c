#include <stdio.h>

int main() {
    float my;
    printf("entrer moyenne : ");
    scanf("%f",&my);

    if (my < 10) {
        printf("recale\n");
    } else if (my >= 10 && my < 12) {
        printf("passable\n");
    } else if (my >= 12 && my < 14) {
        printf("assez bien\n");
    } else if (my >= 14 && my < 16) {
        printf("Bien\n");
    } else if (my >= 16) {
        printf("tres bien\n");
    }

    return 0;
}
