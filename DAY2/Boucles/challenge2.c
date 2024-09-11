#include <stdio.h>
int main(){
    int i,a,fact=1;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&a);
        if(a < 0){
            printf("veuillez entrer un nomber positif ");
        }else{
            for (i=1; i<=a; i++){
                fact *= i;
            }
            printf("factorial de %d = %d",a,fact);
        }
return 0;
}
