#include <stdio.h>

void second_largest(int arr[], int n) {
    int max=arr[0];
    int second_max=-100;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_max=largest;
            largest=arr[i];
        }
        if(arr[i]<largest && arr[i]>second_max){
            second_max=arr[i];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; 
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    second_largest(arr, n);
    return 0;
}
