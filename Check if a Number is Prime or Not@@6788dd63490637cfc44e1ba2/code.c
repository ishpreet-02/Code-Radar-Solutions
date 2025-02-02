#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int prime=0
    for(int i=2;i<n;i++){
        if((i%2)==0){
            prime=1;
            i++;

        }
    }
    if(prime){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }

}