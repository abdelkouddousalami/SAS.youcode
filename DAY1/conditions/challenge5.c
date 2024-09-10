#include <stdio.h>

int main() {
    int m, j, h, min, secondes,choix,annee;
    double s;
    const int mpn = 12;
    const int jpn = 365;
    const int hpj = 24;
    const int mph = 60;
    const int spm = 60;

    printf("entrez le nombre d'annees : ");
    scanf("%d",&annee);

    printf("\nchoisissez l'unite de conversion :\n");
    printf("1- mois | ");
    printf("2- jours | ");
    printf("3- heures | ");
    printf("4- minutes | ");
    printf("5- secondes . ");
    printf("\nchoissez : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            m = annee * mpn;
            printf("%d annee equivaut a :  %d mois.\n",annee,m);
            break;
        case 2:
            j = annee * jpn;
            printf("%d annee equivaut a : %d jours.\n",annee,j);
            break;
        case 3:
            h = annee * jpn * hpj;
            printf("%d annee(s) equivaut a : %d heures.\n",annee,h);
            break;
        case 4:
            min = annee * jpn * hpj * mph;
            printf("%d annee equivaut a : %d minutes.\n",annee,min);
            break;
        case 5:
            s = annee * jpn * hpj * mph * spm;
            printf("%d annee equivaut a : %.0f secondes.\n",annee,s);
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}
