#include <stdio.h>
int main() {
    int C;
      printf("veuillez entrer la temperature en Celsius : ");
      scanf("%d",&C);
      printf("\n");
      if (C < 0){
        printf("l'etat de l'eau a cette temperature est : Solide");
      }else if (C >= 100){
        printf("l'etat de l'eau a cette temperature est : Gaz");
      }else if (0 <= C < 100){
        printf("l'etat de l'eau a cette temperature est : Liquide");
      }
      printf("\n");
return 0;
}
