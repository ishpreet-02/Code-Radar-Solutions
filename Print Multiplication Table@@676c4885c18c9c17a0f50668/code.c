#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d",num,i,num*i);
        printf("\n");
    }
    return 0;
}