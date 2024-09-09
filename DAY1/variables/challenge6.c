#include <stdio.h>
int main() {
    float a,b;
     printf("veuillez entrer premier nombre : ");
     scanf("%f",&a);
     printf("veuillez entrer deuxieme nombre : ");
     scanf("%f",&b);
     printf("\n");
        printf("\t\t\t resultat :\n");
        printf("\n");
        printf("addition        : %.2f + %.2f  = %.2f\n",a,b,a+b);
        printf("multiplication  : %.2f x %.2f  = %.2f\n",a,b,a*b);
        printf("soustraction    : %.2f - %.2f  = %.2f\n",a,b,a-b);
        if (b != 0){
            printf("devision        : %.2f / %.2f  = %.2f\n",a,b,a/b);
        }else{
            printf("devision        :Error on ne peut pas diviser par 0");

        }
        printf("\n");
return 0;
}
