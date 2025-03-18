#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=0;i<n;i++){
            
        for(int j=0;j<=i;j++){
            int a=i+j;
            if(a%2==0){
                printf("%d ",1);
            }
            else{
                printf("%d",0);
            }



            
        }
        printf("\n");

    }

    return 0;
}