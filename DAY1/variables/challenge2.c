#include <stdio.h>
int main() {
    float C,K;
      printf("veuillez entrer la température en Celsius :  ");
      scanf("%f",&C);
          K = C + 273.15;
      printf("\n");
        printf("la temperature en Kelvin est : %.2f\n\n",K);
        printf("\t\t%.2f C = %.2f K\n",C,K);

return 0;
}
