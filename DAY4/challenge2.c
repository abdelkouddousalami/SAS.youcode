#include <stdio.h>
 int somme(int a, int b){
    int pr=0;
    pr = a * b;
    return pr;
 }
 int main(){
    int n,m;
    printf("veuillez entre le premiere nomber : ");
    scanf("%d",&m);
     printf("veuillez entre le deuxieme nomber : ");
    scanf("%d",&n);
    int k = somme(n,m);
    printf(" la produit est %d : ",k);
    return 0;
 }
