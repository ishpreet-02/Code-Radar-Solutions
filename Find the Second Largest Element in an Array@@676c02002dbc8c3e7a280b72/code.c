#include <stdio.h>

void second_largest(int arr[], int n) {
    if (n < 2) {  
        printf("-1\n");  // If there are fewer than 2 elements, no second largest exists.
        return;
    }

    int largest = arr[0];
    int second_largest = -1; // Assume no second largest initially.

    for (int i = 1; i < n; i++) { 
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && (second_largest == -1 || arr[i] > second_largest)) {
            second_largest = arr[i];
        }
    }

    printf("%d\n", (second_largest == -1) ? -1 : second_largest); // Print -1 if no second largest exists.
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; // Valid in C99+
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    second_largest(arr, n);
    return 0;
}
