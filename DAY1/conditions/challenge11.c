#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int jour = rand() % 7;
    switch (jour) {
        case 0: printf("lundi");
         break;
        case 1: printf("mardi");
         break;
        case 2: printf("mercredi");
        break;
        case 3: printf("jeudi");
         break;
        case 4: printf("vendredi");
         break;
        case 5: printf("samedi");
         break;
        case 6: printf("dimanche");
         break;
    }

    return 0;
}
