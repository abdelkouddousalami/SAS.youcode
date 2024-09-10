#include <stdio.h>
int main() {
    int a,b,c,d,numb;
        printf("veuillez entrer votre nomber  entier a quatre chiffres : ");
        scanf("%d",&numb);

            a = numb/1000;
            b = (numb%1000)/100;
            c = (numb%100)/10;
            d = (numb%10);

        printf("\ninverse est : %d%d%d%d\n",d,c,b,a);
return 0;
}
