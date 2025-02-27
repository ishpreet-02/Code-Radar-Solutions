// Your code here...
#include<stdio.h>
void second_largest(int *arr, int n){
    largest=arr[0];
    second_largest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if (arr[i]<largest && arr[i]>second_largest){
            second_largest=a[i];

        }

        }
    printf("%d",second_largest);
    }

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    second_largest(arr,n);

}