#include <stdio.h>

int main(){
    int i=1,a,count=0;
        printf("veuillez entrer votre nomber : ");
        scanf("%d",&a);
            do{
                if(i%2 == 0){
                    printf("%d ",i);
                    count++;
                }
                i++;
            }while(a != count);
    return 0;
}
