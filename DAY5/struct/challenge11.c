#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char FullName[50];
    int Grades[5];
} Student;


int main(){
    int count = 0;
    int num = 1;
    char choice;

    Student *student = malloc(num * sizeof(Student));
    if (student == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    do
    {
        printf("1 - add new student.\n");
        printf("2 - display.\n");
        printf("0 - EXIST\n");

        printf("entrer votre choice : ");
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
                student = realloc(student, num * sizeof(Student));
            }
            if (student == NULL)
            {
                    printf("Memory reallocation failed!\n");
                    return 1;
            }
            printf("Enter the name : ");
            getchar();
            fgets(student[count].FullName, 50, stdin);
            printf("----------------------\n");
            student[count].FullName[strcspn(student[count].FullName, "\n")] = '\0';

            for (int i = 0; i < 5; i++)
            {
                printf("Enter grade[%i] ==> ",i+1);
                scanf("%i",&student[count].Grades[i]);
            }
            printf("----------------------\n");
            count ++;
            break;
        case '2':
            if (count == 0)
            {
                printf("No students to show\n");
                printf("----------------------\n");
                break;
            }
            for (int i = 0; i < count; i++)
            {
                printf("Student %i: \n",i+1);
                printf("Name : %s\n",student[i].FullName);
                printf("Grades : ");
                for (int j = 0; j < 5; j++)
                {
                    printf("%i ",student[i].Grades[j]);
                }
                printf("\n");
                printf("----------------------\n");
                }
            break;
        default:
            printf("Invalid choice, pleace choose a valid option\n");
            printf("----------------------\n");
            break;
        }
    } while (choice != '0');
    free(student);

    return 0;
}
