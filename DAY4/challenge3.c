#include <stdio.h>
void max(int a, int b){
    if (a<b){
        printf("max nomber est : %d",b);
    }else{
        printf("max nomber est : %d",a);
    }
}
int main(){
    int a,b;
    printf("veuillez entre premier nombre : ");
    scanf("%d",&a);
    printf("veuillez entre dexieme nombre : ");
    scanf("%d",&b);
        max(a,b);
    return 0;
}
