#include <stdio.h>

int main() {
    char c;
    printf("veuillez entrer charcter : ");
    scanf("%c",&c);

    if (c >= 65 && c <= 90) {
        printf("alphabet majuscule\n");
    } else {
        printf("Pas un alphabet majuscule\n");
    }

    return 0;
}
