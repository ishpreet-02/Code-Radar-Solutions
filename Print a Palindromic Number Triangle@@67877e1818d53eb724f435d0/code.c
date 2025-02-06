#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");


        }
        for(int k=1;k<i;k++){
            printf("%d",num);
            num++;
        }
        
        for(int k=i;k>0;k--){
            printf("%d",num);
        }
        printf("\n");
    }
}