#include <stdio.h>

void second_largest(int arr[], int n) {
    if (n < 2) {  
        printf("-1\n");
        return;
    }

    int smallest = arr[0];
    int second_smallest = -1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] <smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] >smallest && (second_smallest == -1 || arr[i] < second_smallest)) {
            second_smallest = arr[i];
        }
    }

    printf("%d\n", (second_smallest == -1) ? -1 : second_smallest); 
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; 
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    second_largest(arr, n);
    return 0;
}
