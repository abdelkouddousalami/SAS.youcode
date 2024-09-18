#include <stdio.h>

typedef struct {
    float rayon;
} cercle;

float Rcercle(cercle c) {
    float const PI = 3.14;
    return PI * c.rayon * c.rayon;
}

int main() {
    cercle c;
    printf("entrer le rayon du cercle: ");
    scanf("%f", &c.rayon);
    printf("aire du cercle est: %.2f\n", Rcercle(c));
    return 0;
}
