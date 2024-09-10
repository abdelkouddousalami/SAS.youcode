#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;
    printf("veuillez entrer la date comme HH:MM:SS : \n");
    printf("HH : ");
        scanf("%d",&h1);
    printf("MM : ");
        scanf("%d",&m1);
    printf("SS : ");
        scanf("%d",&s1);
    printf("veuillez entrer la date 2 comme HH:MM:SS : \n");
    printf("HH : ");
        scanf("%d",&h2);
    printf("MM : ");
        scanf("%d",&m2);
    printf("SS : ");
        scanf("%d",&s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier instant vient avant le deuxieme\n");
    } else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le deuxieme instant vient avant le premier\n");
    } else {
        printf("meme instant\n");
    }

    return 0;
}
