#include <stdio.h>

void rotate(int arr[], int n, int d) {
    if (d == 0 || d == n) return; // No need to rotate if d is 0 or equal to n

    int temp[d];  

    // Store first 'd' elements in temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy back the 'd' elements from temp to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    k = k % n;  // To handle cases where k >= n
    rotate(arr, n, n-k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
