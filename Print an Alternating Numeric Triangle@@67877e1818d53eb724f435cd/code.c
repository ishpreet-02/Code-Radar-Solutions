#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=0;i<n;i++){
        num=0;
        for(int j=0;j<=i;j++){
            printf("%d",num);
            num++;


        }
        printf("\n");

        
    }
    return 0;
}