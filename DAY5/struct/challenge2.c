#include <stdio.h>

typedef struct information {
    char nom[50];
    char prenom[50];
    int note[10];

}information;

int main() {
    information notes = {.nom = "EL ALAMI", .prenom = "Abdelkouddous", .note = {20,20,17,18,16,19,20,16,14,16} };

   printf(" nom est : %s \n prenom est : %s \n notes : ",notes.nom,notes.prenom);
   for (int i =0 ; i<10; i++){
    printf("%d ",notes.note[i]);
   }

    return 0;
}
