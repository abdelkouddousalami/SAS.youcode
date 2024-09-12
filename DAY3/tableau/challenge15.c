#include <stdio.h>
int main() {

int i,n,m;
   printf("entrer premier size de tableau : ");
    scanf("%d",&n);
    int T[n];
     for(i=0;i<n;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("entrer deuxieme size de tableau : ");
    scanf("%d",&m);
    int S[n];
     for(i=0;i<m;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&S[i]);
    }
    int H[n+m];
    for(i=0;i<n;i++){
        H[i]=T[i];
    }
    int count=0;
     for(i=n;i<m+n;i++){
        H[i]=S[count];
        count++;
    }
    for(i=0;i<m+n;i++){
        printf("%d",H[i]);
    }
    return 0;
}
