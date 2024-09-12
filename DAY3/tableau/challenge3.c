#include <stdio.h>

int main() {
    int n,s=0;

    printf("chosser votre size : ");
    scanf("%d", &n);

    int T[n];

    printf("entrer votre element : \n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ",i + 1);
        scanf("%d", &T[i]);
         s = s + T[i];
    }

    printf("la somme de tableau est : %d\n",s);

    return 0;
}
