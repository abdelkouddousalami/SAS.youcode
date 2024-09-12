#include <stdio.h>
int main(){
    int i,n,r,x=0;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&n);
    int T[n],A[n];
    for(i=0; i<n; i++){
        printf("T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("veuillez entre element pour recherche : ");
    scanf("%d",&r);
    for(i=0; i<n; i++){
        if(T[i] == r){
            x=1;
        }
    }
    if(x){
        printf("element found succes");
    }else{
        printf("element not found");
    }
    return 0;

}
