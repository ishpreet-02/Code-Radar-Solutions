// Your code here...scan
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int a=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n;j++){
        for(int k=0;k<n;k++){
            if(arr[k]!=j){
                a=1;
            }

        }
        if(a==1){
            printf("%d",j);
            break;
            }

    }
}