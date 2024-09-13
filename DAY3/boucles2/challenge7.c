#include <stdio.h>

int main(){
    int n,a =0,b=1,temp,i;
    printf("entrer le nombre: ");
    scanf("%d",&n);

    if (n==1){
        printf("%d",a);
    }
    else if (n==2){
        printf("%d %d",a,b);
    }else {
        printf("%d %d",a,b);
        for (i=3; i<=n; i++){
            temp = a + b;
            a = b;
            b = temp;
            printf(" %d ",temp);

        }
    }
    return 0;
}
