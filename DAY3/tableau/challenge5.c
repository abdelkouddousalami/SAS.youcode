#include <stdio.h>

int main() {
    int n,min;

    printf("chosser votre size : ");
    scanf("%d", &n);
    int T[n];

    printf("entrer votre element :\n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ",i+1);
        scanf("%d", &T[i]);
    }
    min = T[0];

    for (int i = 1; i < n; i++) {
        if (T[i] < min) {
            min = T[i];
        }
    }
    printf("min element est : %d\n",min);
    return 0;
}
