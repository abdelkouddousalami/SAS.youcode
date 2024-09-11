#include <stdio.h>

int main() {
    int n, a=0,b=1,temp;

    printf("entre le nombre de la suite de fibonacci: ");
        scanf("%d", &n);
    printf("Les %d premiers  de la suite de fibonacci est :\n", n);
            for (int i = 0; i < n; i++) {
                 if (i == 0) {
                    printf("%d", a);
                }else if (i == 1) {
                    printf(", %d", b);
                }else {
                    temp = a + b;
                    a = b;
                    b = temp;
                    printf(", %d", b);
        }
    }

    return 0;
}
