#include <stdio.h>
int main() {
    int a,inve=0;
        printf("veuillez entrer votre nomber : ");
        scanf("%d",&a);
        do{

            inve = (inve*10)+(a%10);

            a = a/10;

        }while(a != 0);
            printf("inversse nombre est : %d",inve);
    return 0;
}
