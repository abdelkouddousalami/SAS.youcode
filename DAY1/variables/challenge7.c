#include <stdio.h>

int main() {
    float num1, num2, num3;
    float moyenne;
    int pd1 = 2, pd2 = 3, pd3 = 5;
    printf("Entrez le premier nombre : ");
    scanf("%f",&num1);
    printf("Entrez le deuxième nombre : ");
    scanf("%f",&num2);
    printf("Entrez le troisième nombre : ");
    scanf("%f",&num3);
        printf("\n");

            moyenne = ((num1 * pd1) + (num2 * pd2) + (num3 * pd3)) / (pd1 + pd2 + pd3);

    printf("La moyenne pondere est : %.2f\n", moyenne);

    return 0;
}
