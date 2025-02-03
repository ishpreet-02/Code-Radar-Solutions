#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int b=pow(y,2);
    if(x==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}