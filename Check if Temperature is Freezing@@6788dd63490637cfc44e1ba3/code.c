#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if(x<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    printf("%s", welcome());
    return 0;
}