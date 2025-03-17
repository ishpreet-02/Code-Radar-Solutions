// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    int product=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int j=0;j<n-1;j++){
        product=arr[j]*arr[j+1];
        if(product>=max){
            max=product;
        }

    }
    printf("%d",product);
}