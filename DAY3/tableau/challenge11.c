#include <stdio.h>
int main(){
    int i,n,r,re,x =0;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&n);
    int T[n],A[n];
    for(i=0; i<n; i++){
        printf("T[%d] : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("veuillez entrer valleur pour remplacer : ");
    scanf("%d",&re);
    printf("veuillez entre element pour remplacer : ");
    scanf("%d",&r);

    for(i=0; i<n; i++){
        if(T[i] == r){
            T[i] = re;
            break;
        }else{
            x =1;
        }
    }
    if(x){
        printf("\nelement not found\n\n");
    }else{
        printf("\nsucces\n\n");
    }
   printf("T[n] = ");
    for(i=0; i<n; i++){
        printf("%d",T[i]);
    }

    return 0;

}
