#include <stdio.h>
int main() {
    float Y,Km;
      printf("veuillez entrer la distance en kilometres :  ");
      scanf("%f",&Km);
          Y = Km * 1093.61;
      printf("\n");
        printf("la la distance en Yards est : %.2f\n\n",Y);
        printf("\t\t%.2f Km = %.2f Yards\n",Km,Y);

return 0;
}
