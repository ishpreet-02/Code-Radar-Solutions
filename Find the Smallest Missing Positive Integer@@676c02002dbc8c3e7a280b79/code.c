// Your code here...scan
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int num=1;
    int a=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<=n;j++){
        if(num!=arr[j]){
            a=num;

        }
        else{
            num++;
        }



    }
    printf("%d",a);
}