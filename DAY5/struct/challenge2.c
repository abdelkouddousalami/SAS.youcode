#include <stdio.h>

typedef struct notes {
    char nom[50];
    char prenom[50];
    int note[10];
} notes;

int main() {
    notes etudiant;
    printf("entrez votre nom: ");
    gets(etudiant.nom);

    printf("entrez votre prenom: ");
    gets(etudiant.prenom);

    printf("entrez votre note: \n");
    for (int i =0; i<10; i++){
            printf("note%d : ",i+1);
    scanf("%d",&etudiant.note[i]);
    }
    printf("\nnom: %s\nprenom: %s\n", etudiant.nom, etudiant.prenom);
    printf("notes : ");
    for(int i =0; i<10; i++){
        printf("%d ",etudiant.note[i]);
    }


    return 0;
}
