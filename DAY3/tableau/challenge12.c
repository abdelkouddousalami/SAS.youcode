#include <stdio.h>

int main() {
    int n, i;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&n);
    int T[n];
    for(i=0; i<n; i++){
        printf("T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("le elements pairs de tableau est : ");
    for (i = 0; i < n; i++) {
        if (T[i] % 2 == 0) {
            printf("%d ",T[i]);
        }
    }

    return 0;
}
