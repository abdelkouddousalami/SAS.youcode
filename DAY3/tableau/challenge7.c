#include <stdio.h>
int main(){
    int temp,n,i,j;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&n);
    int T[n];
    for(i=0; i<n; i++){
        printf("T[%d]",i+1);
        scanf("%d",&T[i]);
    }

        for(i=0; i<n; i++){
            for(j=i+1; j<n;j++){
                if(T[i] > T[j]){
                    temp = T[i];
                    T[i] = T[j];
                    T[j] = temp;
                }
            }
        }
        for (i=0; i<n; i++){
            printf("%d ",T[i]);
        }
return 0;
}
