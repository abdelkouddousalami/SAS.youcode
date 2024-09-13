#include <stdio.h>

int main(){
    int n[10],i=0,count=0;
    while(i<=10){
        printf("entrer  valeur de element %d: ",i+1);
        scanf("%d", &n[i]);
        if(n[i]==0){
            break;
        }
        count++;
        i++;
    }
    int s=0;
    for(i=0;i<count;i++){
        s = s + n[i];
    }
    printf("La moyenne est: %d", (s/count));
    return 0;
}
