// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<arr[i-1]){
            printf("Not Sorted");
            return 0;
        }

    }
    printf("Sorted");
}