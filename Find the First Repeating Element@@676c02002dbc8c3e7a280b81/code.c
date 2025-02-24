#include <stdio.h>
#include <limits.h>

#define MAX 100000  // Define a large enough max array size

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int index[MAX];

    // Initialize index array with -1
    for (int i = 0; i < MAX; i++) {
        index[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first_repeat_index = INT_MAX;  // Store the minimum index of repetition

    for (int i = 0; i < n; i++) {
        if (index[arr[i]] != -1) {  // If already present
            if (index[arr[i]] < first_repeat_index) {
                first_repeat_index = index[arr[i]];
            }
        } else {
            index[arr[i]] = i;  // Store index of first occurrence
        }
    }

    if (first_repeat_index == INT_MAX) {
        printf("-1");  // No repeating element found
    } else {
        printf("%d", arr[first_repeat_index]);  // Print the first repeating element
    }

    return 0;
}
