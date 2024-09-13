#include <stdio.h>
int main(){
    int i,a,s=0;
        printf("veuillez entrer votre nomber : ");
        scanf("%d",&a);
            for(i=0; i<=a; i++){
                s = s + i;
            }
            printf("la somme est : %d",s);
}
