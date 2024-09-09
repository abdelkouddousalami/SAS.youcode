#include <stdio.h>
#include <math.h>
int main() {
    float a1,a2,b1,b2,c1,c2,distance;
        printf("entrer la premier point : \n");

    printf("a1 : ");
    scanf("%f",&a1);
    printf("b1 : ");
    scanf("%f",&b1);
    printf("c1 : ");
    scanf("%f",&c1);

        printf("entrer la deuxieme point : \n");

    printf("a2 : ");
    scanf("%f",&a2);
    printf("b2 : ");
    scanf("%f",&b2);
    printf("c2 : ");
    scanf("%f",&c2);

        distance = sqrt(pow((a2-a1),2)+pow((b2-b1),2)+pow((c2-c1),2));


    printf("la distance entre deux points saisis dans l'espace 3D est : %.2f\n",distance);
return 0;
}
