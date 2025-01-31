#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int a=x;a>0;a--){
        printf("*");
    }
    printf("\n");
    return 0;
}