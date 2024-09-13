#include <stdio.h>
void min(int a, int b){
    if (a<b){
        printf("min nomber est : %d",a);
    }else{
        printf("min nomber est : %d",b);
    }
}
int main(){
    int a,b;
    printf("veuillez entre premier nombre : ");
    scanf("%d",&a);
    printf("veuillez entre dexieme nombre : ");
    scanf("%d",&b);
        min(a,b);
    return 0;
}
