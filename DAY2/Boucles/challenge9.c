#include <stdio.h>
int main(){
    int a,count = 0;
    printf("veuillez entrer votre nomber : ");
    scanf("%d",&a);
        do{
            a = a/10;
            count++;
        }while(a!=0);

        printf("conpteur est : %d",count);
}
