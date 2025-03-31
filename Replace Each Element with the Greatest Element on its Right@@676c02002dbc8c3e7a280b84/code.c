// Your code here...#include <stdio.h>

void replaceWithGreatest(int arr[], int n) {
    int max_right = -1;  // The rightmost element should be replaced with -1

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i]; // Store the current value before modifying it
        arr[i] = max_right; // Replace with the maximum found so far
        if (temp > max_right) {
            max_right = temp; // Update max_right if current is greater
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

    replaceWithGreatest(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
