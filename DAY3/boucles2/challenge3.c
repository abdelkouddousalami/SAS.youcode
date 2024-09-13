#include <stdio.h>
int main() {
    int a,i,j,x=0;
        printf("veuilez entrer votre nombre : ");
        scanf("%d",&a);
        printf("premiers nombres est : ");
            for(i=2 ;i<=a;i++){
                    x = 0;
                for(j=2; j<i; j++){
                    if(i%j == 0){
                        x = 1;
                        break;
                    }

                }
                if (x==0)
                    printf("%d ",i);

            }
    return 0;
}
