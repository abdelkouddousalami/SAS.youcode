#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[30];
    float solde;
} comptebanquaire;

comptebanquaire ajout(comptebanquaire cm, float montant) {
    cm.solde += montant;
    return cm;
}

int main() {
    comptebanquaire cm;
    float montant;

    strcpy(cm.nom, "abdelkouddous");
    cm.solde = 1700;

    printf("le compte bancaire %s avec le solde %.2f dh\n", cm.nom, cm.solde);
    printf("entrer le montant que vous vouler ajoute : ");
    scanf("%f", &montant);

    cm = ajout(cm, montant);
    printf("solde apree ajoute de %.2f dh est : %.2f dh\n", montant, cm.solde);

    return 0;
}
