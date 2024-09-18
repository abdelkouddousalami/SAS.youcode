#include <stdio.h>

typedef struct information {
    char nom[50];
    char prenom[50];
    int age;
} information;

int main() {
    information personne;
    printf("entrez votre nom: ");
    gets(personne.nom);

    printf("entrez votre prenom: ");
    gets(personne.prenom);

    printf("entrez votre age: ");
    scanf("%d", &personne.age);
    printf("\nnom: %s\nprenom: %s\nage: %d\n", personne.nom, personne.prenom, personne.age);

    return 0;
}
