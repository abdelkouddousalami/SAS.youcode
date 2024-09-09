#include <stdio.h>
#include <math.h>
int main() {
    float r,volume;
    const float pi = 3.14;
        printf("veuillez entrer le rayon de la sphere : ");
        scanf("%f",&r);
        printf("\n");
        volume = (4.0/3.0)*pi*pow((r),3);
            printf("le volume de sphere dont le rayon est %.2f , est : %.2f\n",r,volume);

return 0;
}
