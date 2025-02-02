#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int a=0;a<x;a++){
        for(int j=a;j>=0;j--){
            printf("* ");

        }
        printf("\n");
    }

    return 0;
}