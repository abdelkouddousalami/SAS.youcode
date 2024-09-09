#include <stdio.h>
int main() {
    float ms,kh;
      printf("veuillez entrer la vitesse en kilometres par heure (km/h) :  ");
      scanf("%f",&kh);
          ms = kh * 0.27778;
      printf("\n");
        printf("la vitesse en metres par seconde (m/s) est : %.2f\n\n",ms);
        printf("\t\t%.2f K/h = %.2f m/s\n",kh,ms);

return 0;
}
