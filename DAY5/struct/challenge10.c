#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char FullName[30];
    float salary;
} Employers;
int count = 0;

int main(){
    int num = 1;
    Employers* Dyn = malloc(num * sizeof(Employers));
    char choice;
    if (Dyn == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    do
    {

        printf("1 - add new employer.\n");
        printf("2 - display\n");
        printf("0 - EXIST.\n");
        printf("\n entrer votre choice ");
        scanf(" %c",&choice);
        printf("----------------------\n");
        getchar();

        switch (choice)
        {
        case '0':
            break;
        case '1':
            if (count == num)
            {
                num ++;
                Dyn = realloc(Dyn, num * sizeof(Employers));
            }
            if (Dyn == NULL)
            {
                printf("failed!\n");
                printf("----------------------\n");
                return 1;
            }
            printf("Enter the full name : ");
            fgets(Dyn[count].FullName, 30, stdin);
            Dyn[count].FullName[strcspn(Dyn[count].FullName, "\n")] = '\0';
            printf("----------------------\n");

            printf("Enter the salary ==> ");
            scanf("%f",&Dyn[count].salary);
            printf("----------------------\n");

            count++;
            break;
        case '2':
            if (count == 0)
            {
            printf("No employers to display.\n");
            printf("----------------------\n");
            }else
            {
                for (int i = 0; i < count; i++) {
                    printf("Employer %d:\n", i + 1);
                    printf("Name: %s\n", Dyn[i].FullName);
                    printf("Salary: %.2f\n", Dyn[i].salary);
                    printf("----------------------\n");
                }
            }
            break;
        default:
            printf("Invalid choice, pleace choose a valid option");
            printf("----------------------\n");
            break;
        }
    } while (choice != '0');

    free(Dyn);

    return 0;
}
