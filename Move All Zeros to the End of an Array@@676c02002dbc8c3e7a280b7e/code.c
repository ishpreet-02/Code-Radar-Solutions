// Your code here...#include <stdio.h>
#include <stdio.h>
void moveZeroesToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero elements forward
        }
    }

    // Fill remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZeroesToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
