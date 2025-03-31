#include <stdio.h>

void second_largest(int arr[], int n) {
    if(n<2){
        printf("%d",-1);
        return;
        
    }
    int max=arr[0];
    int second_max=-100;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
        if(arr[i]<max && arr[i]>second_max){
            second_max=arr[i];
        }
    }
    printf("%d",second_max);
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
