#include <stdio.h>

int main() {
    int n;

    printf("chosser votre size : ");
    scanf("%d", &n);

    int T[n];

    printf("entrer votre element : \n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ",i + 1);
        scanf("%d", &T[i]);
    }

    printf("Les element est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
