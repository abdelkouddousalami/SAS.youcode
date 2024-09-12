#include <stdio.h>
int main(){
    int i,a;
    printf("veuillez entrer votre nomber : ");
    scanf("%d",&a);
        printf("tableau : \n");
        for(i=10; i>=1; i--){
            printf("%d x %d = %d\n",a,i,a*i);
        }
return 0;
}
