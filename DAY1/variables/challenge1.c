#include <stdio.h>
int main() {
    int age;
    char nom[50],prenom[50],sexe[10],email[50];
        printf("veuillez entrer votre nom : ");
        gets(nom);
        printf("veuillez entrer votre prenom : ");
        gets(prenom);
        printf("veuillez entrer votre age : ");
        scanf("%d",&age);
        getchar();
        printf("veuillez entrer votre sexe : ");
        gets(sexe);
        printf("veuillez entrer votre email : ");
        gets(email);

            printf("\n");
            printf("\n");
            printf("\t\t\t\t\t -------- votre information  -------- \t\t\t\t\n");
            printf("\n");

        printf("votre nom : %s\n",nom);
        printf("votre prenom : %s\n",prenom);
        printf("votre age    : %d\n",age);
        printf("votre sexe   : %s\n",sexe);
        printf("votre email  : %s\n",email);
           printf("\n");
           printf("\t\t\t\t\t-----FIN-----\t\t\t\t\t");

return 0;
}
