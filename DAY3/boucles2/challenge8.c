#include <stdio.h>

int main() {
        int T[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    int t =sizeof(T) / sizeof(T[0]),fin = t - 1;
    int rech;
    int debut = 0,indice = -1,m;

    printf("entrez une nombre pour rechercher : ");
    scanf("%d",&rech);

    while (debut <= fin) {
        m = debut + (fin - debut) / 2;

        if (T[m] == rech) {
            indice = m;
            break;
        } else if (T[m] < rech) {
            debut = m + 1;
        } else {
            fin = m - 1;
        }
    }

    if (indice != -1) {
        printf("nombre %d est trouve a l'indice : %d\n",rech,indice);
    } else {
        printf("nombre %d na pas trouve \n",rech);
    }

    return 0;
}
