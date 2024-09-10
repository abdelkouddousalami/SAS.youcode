#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, l7eel1, l7eel2;

    printf("entrez le coefficient a 'note : a!=0': ");
        scanf("%lf",&a);
    printf("entrez le coefficient b : ");
        scanf("%lf",&b);
    printf("entrez le coefficient c : ");
        scanf("%lf",&c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        l7eel1 = (-b + sqrt(delta)) / (2 * a);
        l7eel2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les racines sont : %.2lf et %.2lf\n",l7eel1,l7eel2);
    }
    else if (delta == 0) {
        l7eel1 = l7eel2 = -b / (2 * a);
        printf("La racine double est : %.2lf\n",l7eel1);
    }
    else {
        printf("n'a pas de solution reelle");
    }
        return 0;
    }
