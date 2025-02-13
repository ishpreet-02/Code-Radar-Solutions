// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the first element and initialize min and max
    scanf("%d", &arr[0]);
    int non_prime = 0;

    // Read the remaining elements and find min/max in one loop
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        for(int j=3;j<arr[i];j++){
            if((arr[i])%j==0){
                non_prime++;
            }

        }
    }
    // printf("%d",non_prime);

    printf("%d",n-non_prime);
    return 0;
}
