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
        int a=0;
        if(num<0){
            a=-num;
            while(a>0){
                digit=a%10;
                result+=digit;
                a=a/10;
        }
            printf("%d ",result);
        }
        else{
            while(num>0){
                digit=num%10;
                result+=digit;
                num=num/10;
            }
            printf("%d ",result);
        }


    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        sum(arr[i]);

        
    }
}
