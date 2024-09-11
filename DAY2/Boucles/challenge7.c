#include <stdio.h>
int main(){
    int a,inver=0;
    printf("veuillez entre votre nomber : ");
    scanf("%d",&a);
        do{
            inver = (inver*10)+(a%10);
            a /= 10;
        }while(a!=0);
        printf("inverse nomber est : %d",inver);
    return 0;
}
