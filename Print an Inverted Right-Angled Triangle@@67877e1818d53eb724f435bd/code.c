#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int a=0;a<x;a++){
        for(int j=0;j<(x-a);j++){
            printf("* ");
            

        }
        printf("\n");
    }

    return 0;
}