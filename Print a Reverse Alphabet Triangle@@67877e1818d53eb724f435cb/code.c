#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a=65;
        for(int j=n;j>i;j--){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}