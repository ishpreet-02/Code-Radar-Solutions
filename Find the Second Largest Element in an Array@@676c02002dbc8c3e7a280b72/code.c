// Your code here...
#include<stdio.h>
#include <limits.h>
void second_largest(int arr[], int n){
    int largest=arr[0];
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if (arr[i]<largest && arr[i]>second_largest){
            second_largest=arr[i];

        }


        }
    if(second_largest==INT_MIN){
        printf("%d",-1);
    }
    else{
        printf("%d",second_largest);
      
    }
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