// Your code here...
#include<stdio.h>
int main(){
    int n;
    int count;
    scanf("%d",&n);
    while(n>0){
        n=n/2;
        count++;
    }
    printf("%d",count);
}