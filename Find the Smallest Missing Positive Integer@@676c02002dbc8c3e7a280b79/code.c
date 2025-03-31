#include <stdio.h>
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
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
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    for(int i=1;i<45;i++){
        int present=0;
        for(int j=0;j<n;j++){
            if(arr[i]==i){
                present=1;
            }
        }
        if(present==0){
            printf("%d",i);
            break;
        }
    }
}