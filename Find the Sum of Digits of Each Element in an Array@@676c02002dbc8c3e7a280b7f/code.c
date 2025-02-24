// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    void sum(int n){
        int n;
        int digit=0;
        while(n>0){
            digit=n*10+n%10;
            n=n/10;
        }
        return digit;

    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        sum(arr[i]);
        printf("%d ",arr[i]);

        
    }
}
