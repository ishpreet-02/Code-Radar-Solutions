#include <stdio.h>


int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z)
    int c=x**2+y**2;
    int d=z**2;
    if(c==d){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}