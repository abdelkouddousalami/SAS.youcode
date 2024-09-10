#include <stdio.h>

int main() {
    unsigned int numb;
       printf("entrez un nombre entier: ");
       scanf("%u", &numb);
       printf("\n");
          printf("hexadecimal est : %X\n", numb);
          printf("binary est : ");
    for (int i = 31; i >= 0; i--) {
          printf("%d", (numb >> i) & 1);
    }

    printf("\n");

    return 0;
}
