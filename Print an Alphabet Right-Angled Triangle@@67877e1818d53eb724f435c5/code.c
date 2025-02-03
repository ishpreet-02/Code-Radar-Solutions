#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char c='A';
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",c);
            c++;

        }
        printf("\n");
        c='A';

    }
    return 0;
}