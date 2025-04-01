#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMaxFrequency(int arr[], int n) {
    int maxElement = arr[0], maxFreq = 1;
    int currentElement = arr[0], currentFreq = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == currentElement) {
            currentFreq++;
        } else {
            if (currentFreq > maxFreq) {
                maxFreq = currentFreq;
                maxElement = currentElement;
            }
            currentElement = arr[i];
            currentFreq = 1;
        }
    }
    
    // Check the last element's frequency
    if (currentFreq > maxFreq) {
        maxElement = currentElement;
    }

    return maxElement;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int maxFreqElement = findMaxFrequency(arr, n);
    printf("%d\n", maxFreqElement);

    return 0;
}
