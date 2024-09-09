#include <stdio.h>
int main() {
    char opera;
    float a,b;
     printf("veuillez entrer premier nombre : ");
     scanf("%f",&a);
     printf("veuillez entrer deuxieme nombre : ");
     scanf("%f",&b);
     printf("veuillez entrer  operation : '+' '-' '/' '*' :  ");
     scanf(" %c",&opera);
     printf("\n");
        printf("\t\t\t resultat :\n");
        printf("\n");
        switch(opera){
             case '+' : printf("%.2f + %.2f = %.2f",a,b,a+b);
             break;
             case '-' : printf("%.2f - %.2f = %.2f",a,b,a-b);
             break;
             case '*' : printf("%.2f x %.2f = %.2f",a,b,a*b);
             break;
             case '/' : if (b == 0){
                printf("nous ne pouvons pas diviser par 0");
             }else{
                printf("%.2f / %.2f = %.2f",a,b,a/b);
            }
            break;
        }
        printf("\n");
return 0;
}
