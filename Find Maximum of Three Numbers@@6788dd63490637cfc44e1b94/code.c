#include <stdio.h>


int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y>z){
        printf("%d",x);
    }
    else if(y>x>z){
        printf("%d",y);
    }
    else if(z>x>y){
        printf("%d",z);
    }
    return 0;
}