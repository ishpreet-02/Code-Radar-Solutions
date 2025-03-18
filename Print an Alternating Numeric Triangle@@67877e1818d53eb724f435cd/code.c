#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(num>2){
                printf("%d",1);
            }
            else{
                printf("%d ",num-i+j);
            }
            
        }
        printf("\n");
        num=1;
    }

    return 0;
}