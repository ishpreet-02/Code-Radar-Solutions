#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        for(int j=n-i;j>0;j--){
            printf("%d ",j+i-1);
            
        }
        printf("\n");
    }
}