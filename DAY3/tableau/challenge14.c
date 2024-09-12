#include <stdio.h>

int main() {
    int n,s=0;
    float m;

    printf("chosser votre size : ");
    scanf("%d", &n);

    int T[n];

    printf("entrer votre element : \n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ",i + 1);
        scanf("%d", &T[i]);
         s = s + T[i];
    }
    m = s / n;

    printf("la moyeene de tableau est : %.2f\n",m);

    return 0;
}
