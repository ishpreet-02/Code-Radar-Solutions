// Your code here...
#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1||n==2){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

void fibonacciSeries(int n){
    for(int i=1;i<=n;i++){
        int a=fibonacci(i);
        printf("%d ",a);
    }
}