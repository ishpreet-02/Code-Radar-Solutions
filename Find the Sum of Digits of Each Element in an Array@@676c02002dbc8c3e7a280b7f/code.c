// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    void sum(int n){
        int num=n;
        int digit=0;
        int result=0;
        while(num>0){
            digit=num%10;
            result+=digit;
            num=num/10;
        }
        printf("%d",result);

    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        sum(arr[i]);
        printf("%d ",arr[i]);

        
    }
}
