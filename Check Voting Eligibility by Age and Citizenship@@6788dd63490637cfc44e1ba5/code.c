#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    printf("%s", welcome());
    return 0;
}