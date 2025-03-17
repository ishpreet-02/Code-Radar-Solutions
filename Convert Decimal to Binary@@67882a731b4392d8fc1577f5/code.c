// Your code here...
#include<stdio.h>
void binary(int n){
    int a;
    while(n>0){
        a=n%2;
        printf("%d",a/2);
        n=n/2;
        
    }
}
int main(){
    int n;
    scanf("%d",&n);
    binary(n);
}
