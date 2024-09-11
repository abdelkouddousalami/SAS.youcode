#include <stdio.h>
int main(){
    int i,a,s=0;
        printf("veuillez entre votre nomber : ");
        scanf("%d",&a);
        if(a<0){
            printf("veuillez entre un nombre positif ");
        }else{
        for (i=0; i<=a; i++){
            s = s + i;
        }
        printf("la somme the premier %d nomber est : %d",a,s);
        }
    return 0;
}
