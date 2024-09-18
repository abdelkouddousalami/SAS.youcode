#include <stdio.h>

typedef struct {
    char titre[100];
    char auteur[100];
    int annee;
} Livre;

Livre creerLivre() {
    Livre nouveauLivre;

    printf("entrer le titre du livre: ");
    gets(nouveauLivre.titre);

    printf("entrer auteur du livre: ");
    gets(nouveauLivre.auteur);

    printf("entrer annee de publication: ");
    scanf("%d",&nouveauLivre.annee);

    return nouveauLivre;
}

int main() {
    Livre monLivre = creerLivre();

    printf("\nDetails du livre:\n");
    printf("titre: %s\n",monLivre.titre);
    printf("auteur: %s\n",monLivre.auteur);
    printf("annee: %d\n",monLivre.annee);

    return 0;
}
