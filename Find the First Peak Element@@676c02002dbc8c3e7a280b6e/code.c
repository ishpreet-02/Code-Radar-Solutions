// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    for(int i=1;i<n;i++){
        printf("%d",arr[i+1])
        if(arr[i]>arr[i-1] && arr[i+1]<arr[i]){
            printf("%d",arr[i]);
            return 0;
        }        
    }

    printf("%d",-1);
}