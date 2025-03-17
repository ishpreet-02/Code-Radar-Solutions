// Your code here...
#include<stdio.h>
void binary(int n){
    while(n>0){
        n=n%2;
        printf("%d",n);
        n=n/2;
        
    }
}
int main(){
    int n;
    scanf("%d",&n);
    binary(n);
}
