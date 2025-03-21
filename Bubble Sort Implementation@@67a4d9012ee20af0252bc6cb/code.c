#include<stdio.h>
void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int swap=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
                

            }
        }
        if(swap==0){
            break;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}