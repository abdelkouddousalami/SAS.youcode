#include <stdio.h>

int main(){
        int b,p,old,oldpui;
        printf("entrer la base: ");
        scanf("%d",&b);
        printf("entrer la puissance: ");
        scanf("%d",&p);
        old = b;
        oldpui = p;
        if(p == 0){
            printf("%d^0 = 1", b);
            return 0;
        }
        int s = b;
         for(int i =1; i<b; i++){
            s *= b;
         }
        printf("%d^%d = %d", old,oldpui,s);
        return 0;
}
