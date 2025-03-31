#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=n-i;j>0;j--){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
}