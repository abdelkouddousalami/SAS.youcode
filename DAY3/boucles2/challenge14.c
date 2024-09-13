#include <stdio.h>

int main() {
    // Déclaration d'un tableau contenant les jours de la semaine
    char jours[7][10] = {
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };

    int choix;
    printf("jour de la semaine:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d - %s\n", i + 1, jours[i]);
    }
    printf("\nveuillez entre votre jour (1-7) : ");
    scanf("%d",&choix);
    if (choix < 1 || choix > 7) {
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 7.\n");
        return 1;
    }
    printf("\njour selectionne: %s\n", jours[choix - 1]);
    printf("jour suivant:\n");
    for (int i = choix ; i < 7; i++) {
        printf("%s\n", jours[i]);
    }

    return 0;
}
