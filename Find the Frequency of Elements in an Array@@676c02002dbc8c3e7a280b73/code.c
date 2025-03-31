#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;  
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // ✅ Sorting in descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; 
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

    int count = 1;
    for (int i = 1; i < n; i++) {  
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            printf("%d %d\n", arr[i - 1], count);
            count = 1; 
        }
    }
    printf("%d %d\n", arr[n - 1], count);  // ✅ Print last element's count

    return 0;
}
