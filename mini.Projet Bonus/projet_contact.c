#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
char *nom[MAX];
char *numero[MAX];
char *adress[MAX];
int count = 0;


   int isValidNome(char nom[]) {
        for (int i = 0; i < strlen(nom); i++) {
          if (!isalpha(nom[i]) && nom[i] == ' ') {
            return ;
        }
    }
    return 1;
}

    int isValidPhone(char numero[]) {
        if (strlen(numero) != 10) return 0;
        for (int i = 0; i < 10; i++) {
        if (!isdigit(numero[i]))
            return ;
    }
    return 1;
}

    int isValidAdress(char adress[]) {
        char *at = strchr(adress, '@');
        char *dot = strchr(adress, '.');
        return (at != NULL && dot != NULL && dot > at);
}
    void Add(){
        if(count >= 100){
            printf("contact full");
            return;
        }
            nom[count] = (char*) malloc(MAX * sizeof(char));
            numero[count] = (char*) malloc(MAX * sizeof(char));
            adress[count] = (char*) malloc (MAX* sizeof(char));

            printf("veuillez entrer votr nom contact : ");
            fgets(nom[count], 100, stdin);
            nom[count][strcspn(nom[count], "\n")] = '\0';
            if(!isValidNome(nom[count])){
                printf("incorecct nome essayez encore ... \n ");
                return;
            }

            printf("veuillez entrer numero de contact : ");
            fgets(numero[count],MAX,stdin);
            numero[count][strcspn(numero[count],"\n")] = '\0';
            if(!isValidPhone(numero[count])){
                printf("incorrect numero essayez encore ... \n");
                return;

            }

            printf("veuillez entrer adresse de contact : ");
            fgets(adress[count],MAX,stdin);
            adress[count][strcspn(adress[count],"\n")] = '\0';
            if(!isValidAdress(adress[count])){
                printf("incorect email essayez encore ... \n");
            }
            printf("\n votre contact est bien enregistrer \n");

                        count ++;




    }
   void sortByName() {
       int temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(nom[i],nom[j]) > 0) {
                temp = nom[i];
                nom[i] = nom[j];
                nom[j] = temp;
            }
        }
    }
   }
    void Modif(){
        char nom1[MAX];
        char numero1[MAX];
        char adress1[MAX];


            printf("veuillez entrer votre nom de contact pour modifier : ");
            fgets(nom1,MAX,stdin);
            nom1[strcspn(nom1,"\n")] = '\0';
            int i;
            for (i = 0; i < count; i++) {
                if (strcmp(nom[i],nom1) == 0) {
                       printf("succes , contact trouver \n.");

                }
                printf("veuillez entrer votre nouvelle nom : ");
                fgets(nom1,MAX,stdin);
                nom1[strcspn(nom1,"\n")] = '\0';

                printf("veuillez entrer votre novelle numero : ");
                fgets(numero1,MAX,stdin);
                numero1[strcspn(numero1,"\n")] = '\0';

                printf("veuillez entrer votre nouvelle adress : ");
                fgets(adress1,MAX,stdin);
                adress1[strcspn(adress1,"\n")] = '\0';

                strcpy(nom[i], nom1);
                strcpy(numero[i], numero1);
                strcpy(adress[i], adress1);

            count--;

            }
                        printf("\n votre contact est bien modifier \n");


    }
    void recherche() {
            char searchnom[MAX];
            printf("veuillez entrer votr nom contact pour recherche : ");
            fgets(searchnom, 100, stdin);
            searchnom[strcspn(searchnom, "\n")] = '\0';

     for (int i = 0; i < count; i++) {
        if (strcmp(nom[i], searchnom) == 0) {
            printf("Contact found:\n");
            printf("Name: %s\nPhone: %s\nEmail: %s\n", nom[i], numero[i],adress[i]);
            return;
        }
    }
    printf("Contact not found!\n");
}
    void Delete(){

    char nom2[MAX];
    printf("enter nom pour suprimmer: ");
    fgets(nom2, MAX, stdin);
    nom2[strcspn(nom2, "\n")] = '\0';

    int i, j;
    for (i = 0; i < count; i++) {
        if (strcmp(nom[i], nom2) == 0) {
            free(nom[i]);
            free(numero[i]);
            free(adress[i]);

            for (j = i; j < count - 1; j++) {
                nom[j] = nom[j + 1];
                numero[j] = numero[j + 1];
                adress[j] = adress[j + 1];
            }

            count--;
            printf("contact deleted successfully\n");
            return;
        }
    }
    printf("Contact non trouver\n");
}

   void Display() {
    int i, n = 1;

    printf("\n");
    for (i = 0; i < count; i++) {
        printf("Utilisateur %d\n\n", n++);
        printf("Nom          : %s\n", nom[i]);
        printf("Numero       : %s\n", numero[i]);
        printf("Adresse email: %s\n", adress[i]);
        printf("\n");
    }
}

    int main() {
        int a;

        do{
        printf(" ========================MENU===========================\n");
        printf(" || 1 - add numero                                    ||\n");
        printf(" || 2 - modifier numero                               ||\n");
        printf(" || 3 - display                                       ||\n");
        printf(" || 4 - recherche                                     ||\n");
        printf(" || 5 - suprimmer                                     ||\n");
        printf(" || 6 - Exist ...                                     ||\n");
        printf(" ========================FIN============================\n");
            printf("*****\t****\t****\t*****\t*****\t*****\t*****  *\n");
        printf("entrer votre choix : ");
        scanf("%d",&a);
        getchar();
             switch(a){
            case 1 : system("@cls||clear");
                    Add();
            break;
            case 2 : system("@cls||clear");
                    Modif();
            break;
            case 3 : system("@cls||clear");
                    Display();
            break;
            case 4 : system("@cls||clear");
                    recherche();
            break;
            case 5  : system("@cls||clear");
                    Delete();
            break;
            case 6 : printf("\n....  . au revoir \n");
            break;
            default : printf("invalide choice");


        }
        }while(a != 6);
    return 0;
 }
