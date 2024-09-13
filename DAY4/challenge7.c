#include <stdio.h>
void reverse(char T[],int size){
    int i;
    printf("inverse est : ");
    for(i=size-1; i>=0; i--){
        printf("%c ",T[i]);
    }
}
int main(){
    char T[5] = {'1','2','3','4','5'};
    reverse(T,5);
    return 0;
}
