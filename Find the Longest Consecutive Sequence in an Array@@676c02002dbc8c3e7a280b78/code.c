// Your code here...
#include<stdio.h>


int bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }}
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    int count=0;
    for(int i=1;i<n;i++){
        if((arr[i]-1)==arr[i-1]){
            count++;
        }
    }
    printf("%d",count+1);
}