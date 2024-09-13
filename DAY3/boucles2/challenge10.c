#include <stdio.h>
#include <time.h>

int main(){
    int n;
    char c[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','I','J','K','L','M','O','P','Q','R','S','T','U','V','W','X','Y','Z'} ;
    srand(time(0));
    printf("entrer  nombre de character pour mot de pass: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int r = rand() % (sizeof(c)/sizeof(c[0]));
        printf("%c",c[r]);
    }
    return 0;
}
