#include <stdio.h>
int main(){
    int i,n;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&n);
    int T[n],A[n];
    for(i=0; i<n; i++){
        printf("T[%d]",i+1);
        scanf("%d",&T[i]);
    }
    for (i=0; i<n; i++){
        A[i] = T[i];
    }
    printf("T[%d] = ",n);
    for (i=0; i<n; i++){
        printf("%d ",T[i]);
    }
    printf("\n");
    printf("A[%d] = ",n);
    for (i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    return 0;
}
