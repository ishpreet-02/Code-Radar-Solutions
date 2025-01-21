#include <stdio.h>


int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int c=pow(x,2);
    int d=pow(y,2);
    int e=pow(z,2);
    if(c+d==e){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}