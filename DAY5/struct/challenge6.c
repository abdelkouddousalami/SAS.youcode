#include <stdio.h>

typedef struct Produit{
    char nom[100];
    float prix;
    int quantite;
} Produit;

int main() {
    Produit produits[3];

    for (int i = 0; i < 3; i++) {
        printf("entrer le nom du produit %d: ", i + 1);
        gets(produits[i].nom);

        printf("entrer le prix du produit %d: ", i + 1);
        scanf("%f", &produits[i].prix);

        printf("entrer la quantite du produit %d: ", i + 1);
        scanf("%d",&produits[i].quantite);
        getchar();
    }

    printf("\nInformations sur les produits:\n");
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("produit %d:\n", i + 1);
        printf("nom: %s\n", produits[i].nom);
        printf("prix: %.2f\n", produits[i].prix);
        printf("quantite: %d\n\n", produits[i].quantite);
    }
    printf("\n");

    return 0;
}
