#include <stdio.h>

int main() {
    char c;
    printf("entrer charcter : ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z') {
            printf("alphabet majuscule\n");
        } else {
            printf("alphabet minuscule\n");
        }
    } else {
        printf("pas un alphabet\n");
    }

    return 0;
}
