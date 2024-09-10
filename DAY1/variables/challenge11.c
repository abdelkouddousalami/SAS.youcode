#include <stdio.h>
int main() {
    float lon,lar,s;
        printf("veuillez entrer largeur de rectangle : ");
            scanf("%f",&lar);
        printf("veuillez entrer longueur de rectangle : ");
            scanf("%f",&lon);
        s = lon * lar;
            printf("\nla surface d'un rectangle est : %.2f\n",s);
}
