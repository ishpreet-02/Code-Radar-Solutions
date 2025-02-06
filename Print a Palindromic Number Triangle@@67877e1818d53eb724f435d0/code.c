#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");


        }
        for(int k=1;k<=(2*i-1);k++){
            printf("%d",num);
            num++;
        }
        printf("\n");
        if(num>=2){
            num=1;

        }
    }
}