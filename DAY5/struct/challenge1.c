#include <stdio.h>

typedef struct information {
    char nom[50];
    char prenom[50];
    int age;

}information;

int main() {
    information persone = {.nom = "EL ALAMI", .prenom = "AbdElkouddous" , .age = 23};

        printf(" nom est : %s \n prenom est : %s \n age est : %d",persone.nom,persone.prenom,persone.age);

    return 0;
}
