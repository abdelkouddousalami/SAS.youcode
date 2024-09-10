#include <stdio.h>

int main() {
    unsigned int numb;
    int a=1;
       printf("entrez un nombre entier: ");
       scanf("%u", &numb);
       printf("\n");
          printf("hexadecimal est : %X\n", numb);
          printf("binary est : ");
            for (int i = 31; i >= 0; i--) {
                if ((numb >> i) & 1) {
                    a = 0;
        }
                if (!a) {
                    printf("%d", (numb >> i) & 1);
        }
    }
        if (a) {
            printf("0");
        }

        printf("\n");
    return 0;
}
