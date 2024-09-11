#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *titre[100];
char *dates[100];
char *description[100];
int Tcount = 0;

void addT() {
    if (Tcount >= 100) {
        printf("list est plein\n");
        return;
    }
    titre[Tcount] = (char*) malloc(100 * sizeof(char));
    dates[Tcount] = (char*) malloc(100 * sizeof(char));
    description[Tcount] = (char*) malloc(100 * sizeof(char));

    printf("veuillez entrer task titre : ");
    fgets(titre[Tcount], 100, stdin);
    titre[Tcount][strcspn(titre[Tcount], "\n")] = '\0';

    printf("veuillez entrer task date AAAA-MM-JJ: ");
    fgets(dates[Tcount], 100, stdin);
    dates[Tcount][strcspn(dates[Tcount], "\n")] = '\0';

    printf("veuillez entrer task description : ");
    fgets(description[Tcount], 100, stdin);
    description[Tcount][strcspn(description[Tcount], "\n")] = '\0';

    Tcount++;
}

void Dtask() {
    if (Tcount == 0) {
        printf("aucun tache pour supprimer\n");
        return;
    }

    char title[100];
    printf("entere titre de task pour supprimer: ");
    fgets(title, 100, stdin);
    title[strcspn(title, "\n")] = '\0';

    int i;
    for (i = 0; i < Tcount; i++) {
        if (strcmp(titre[i], title) == 0) {
            free(titre[i]);
            free(dates[i]);
            free(description[i]);

            for (int j = i; j < Tcount - 1; j++) {
                titre[j] = titre[j + 1];
                dates[j] = dates[j + 1];
                description[j] = description[j + 1];
            }
            Tcount--;
            printf("succes\n");
            return;
        }
    }
    printf("error.\n");
}

void DiTask() {
    if (Tcount == 0) {
        printf("emty.\n");
        return;
    }

    for (int i = 0; i < Tcount; i++) {
        printf("titre: %s\n", titre[i]);
        printf("date: %s\n", dates[i]);
        printf("descriotion: %s\n", description[i]);
    }
}

int main() {
    int a;
    do {
        printf("\n\t\t\t-------------------MENU-------------------\t\t\t\n");
        printf("  1- ajouter task \n");
        printf("  2- display task \n");
        printf("  3- suprimer task \n");
        printf("  4- exit \n\n");
        printf("\t\t\t-------------------FIN-------------------\t\t\t\n");

        printf("veuillez entre votre choice : ");
        scanf("%d", &a);
        getchar();
        switch (a) {
            case 1:
                addT();
                break;
            case 2:
                DiTask();
                break;
            case 3:
                Dtask();
                break;
            case 4:
                printf("....\n");
                break;
            default:
                printf("erorr\n");
        }
    } while (a != 4);



    return 0;
}
