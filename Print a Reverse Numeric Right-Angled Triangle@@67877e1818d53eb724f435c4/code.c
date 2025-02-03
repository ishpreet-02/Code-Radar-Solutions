#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=(n-i-1);j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
        num=1;
    }
    return 0;
}