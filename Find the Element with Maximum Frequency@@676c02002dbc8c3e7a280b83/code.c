// Your code here...
#include <stdio.h>
void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&arr[i]);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            printf("%d",arr[i]);
            break;
        }
    }
}

