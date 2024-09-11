#include <stdio.h>
int main() {
    int a, b,s=1;


    printf("entre la base : ");
        scanf("%d",&a);
    printf("entree l'exposant : ");
        scanf("%d",&b);

    for (int i = 0; i < b; i++) {
        s *= a;
    }
        printf("%d^%d = %d\n", a,b,s);

    return 0;
}
