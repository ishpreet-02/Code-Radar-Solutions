#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-2;j++){
            printf(" ");
        
            for(int k=0;k<(2*n-1);k++){
                printf("*");
        }
        }
        printf("\n");
    }

    return 0;
}