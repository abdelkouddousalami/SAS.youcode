#include <stdio.h>

int main() {
    int n,max;

    printf("chosser votre size : ");
    scanf("%d", &n);
    int T[n];

    printf("entrer votre element :\n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    max = T[0];

    for (int i = 1; i < n; i++) {
        if (T[i] > max) {
            max = T[i];
        }
    }
    printf("max element est : %d\n", max);

    return 0;
}
