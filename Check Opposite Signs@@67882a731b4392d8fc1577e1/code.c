#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>=0&&y<=0){
        printf("True");
    }
    else if(x<=0&&y>=0){
        printf("True");
    }
    else if(x>=0 &&y>=0){
        printf("False");
    }
    else if(x<=0 &&y<=0){
        printf("False");
    }
    
    return 0;
}