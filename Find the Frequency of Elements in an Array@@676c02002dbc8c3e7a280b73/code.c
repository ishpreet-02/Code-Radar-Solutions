#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;  // Optimized Bubble Sort
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // Stop early if no swaps
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    // ✅ Corrected Counting Loop
    int count = 1;
    for (int i = 1; i < n; i++) {  // Use `i < n` to prevent out-of-bounds
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            printf("%d %d\n", arr[i - 1], count);
            count = 1; 
        }
    }

    // ✅ Print the last element's count
    printf("%d %d\n", arr[n - 1], count);

    return 0;
}
