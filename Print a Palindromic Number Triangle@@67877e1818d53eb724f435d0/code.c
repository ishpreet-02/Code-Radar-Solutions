#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i+1;k++){
            printf("%d",k);
        
        }
        for(int j=i+1;j>1;j--){
            printf("")
        }

        printf("\n");
    }
}