// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the first element and initialize min and max
    int prime =0;

    // Read the remaining elements and find min/max in one loop
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        for(int j=2,j<arr[i];j++){
            if(arr[i]%j==0){
                prime++;}
        }


    }

    printf("%d",prime);
    return 0;
}