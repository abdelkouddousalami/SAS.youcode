#include <stdio.h>
int main(){
    int i,n;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&n);
    int T[n],A[n];
    for(i=0; i<n; i++){
        printf("T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("T[%d] = ",n);
    for(i=n-1; i>=0; i--){
        printf("%d ",T[i]);
    }
    return 0;

}
