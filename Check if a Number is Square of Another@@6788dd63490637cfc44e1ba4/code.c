#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int b=pow(y,2);
    printf("%d",b);
    if(x==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}