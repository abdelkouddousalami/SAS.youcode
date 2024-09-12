#include <stdio.h>

int main() {

    int n,facteur;
    printf("chosser votre size : ");
    scanf("%d", &n);
    int T[n];

    printf("entrer votre element :\n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ",i+1);
        scanf("%d", &T[i]);
    }

    printf("entrer la facteur : ");
    scanf("%d",&facteur);

    printf("Tableau x %d  = \n",facteur);
    for (int i = 0; i < n; i++) {
        T[i] = T[i] * facteur;
        printf("T[%d] = %d\n",i,T[i]);
    }

    return 0;
}
