// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    void sum(int n){
        int num=n;
        int digit=0;
        while(num>0){
            digit=num*10+num%10;
            num=num/10;
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
