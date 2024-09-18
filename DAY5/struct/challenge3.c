#include <stdio.h>

typedef struct Rectangle{
    float longueur;
    float largeur;
} Rectangle;

float calculer(Rectangle rect) {
    return rect.longueur * rect.largeur;
}

int main() {
    Rectangle Rt;

    printf("entrer la longueur du rectangle: ");
    scanf("%f",&Rt.longueur);

    printf("entrer la largeur du rectangle: ");
    scanf("%f",&Rt.largeur);

    float R = calculer(Rt);
    printf("aire du rectangle est: %.2f\n",R);

    return 0;
}
