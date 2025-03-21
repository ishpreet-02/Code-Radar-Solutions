// Your code here...
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        int swapped = 0; 
        for (int j = 0; j < i; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break; 
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}


