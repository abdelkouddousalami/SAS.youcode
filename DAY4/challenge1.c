#include <stdio.h>
 int somme(int a, int b){
    int s=0;
    s = a + b;
    return s;
 }
 int main(){
    int n,m;
    printf("veuillez entre le premiere nomber : ");
    scanf("%d",&m);
     printf("veuillez entre le deuxieme nomber : ");
    scanf("%d",&n);
    int k = somme(n,m);
    printf(" la somme est %d : ",k);
    return 0;
 }
