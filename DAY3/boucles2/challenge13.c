#include <stdio.h>
int main(){
    int n,m=0;
    printf("enter un nombre: ");
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
        m+=n*i;
    }
    printf("\nLa somme de les produits est : %d\n", m);
    return 0;
}
