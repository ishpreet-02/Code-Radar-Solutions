#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=0;k<n-i;k++){
            printf(" ");}
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
        for(int k=0;k<n-i;k++){
            printf(" ");}
        for(int j=1;j<=i-1;j++){
            printf("*");
        }


    }

    return 0;
}