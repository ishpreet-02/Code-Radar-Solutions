#include <stdio.h>

void second_largest(int arr[], int n) {
    if (n < 2) {  
        printf("-1\n");
        return;
    }

    int largest = arr[0];
    int second_largest = -1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] <largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] >largest && (second_largest == -1 || arr[i] < second_largest)) {
            second_largest = arr[i];
        }
    }

    printf("%d\n", (second_largest == -1) ? -1 : second_largest); 
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
