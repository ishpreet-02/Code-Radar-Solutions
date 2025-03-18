#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=0;i<n;i++){
            if(i%2!=0){
                num=1;
            }
            else{
                num=0;
            }
        for(int j=0;j<=i;j++){

            num=num^1;
            printf("%d ",num);


            
        }
        printf("\n");

    }

    return 0;
}