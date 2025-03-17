// Your code here...
#include<stdio.h>
void binary(int n){
    while(n>0){
        n=n%2;
        n=n/2;
        printf("%d",n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    binary(n);
}
