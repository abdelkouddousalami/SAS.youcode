#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,moyenne;
    printf("veuillez entrer premier nomber : ");
    scanf("%f",&a);
    printf("veuillez entrer deuxieme nomber : ");
    scanf("%f",&b);
    printf("veuillez entrer trioxieme nomber : ");
    scanf("%f",&c);
        moyenne = pow((a*b*c),1/3);
        printf("\n");
            printf("\nla moyenne geometrique de %.2f et %.2f et %.2f est : %.2f\n",a,b,c,moyenne);

return 0;
}
