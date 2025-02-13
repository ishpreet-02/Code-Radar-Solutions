// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the first element and initialize min and max
    scanf("%d", &arr[0]);
    int min = arr[0];
    int max = arr[0];

    // Read the remaining elements and find min/max in one loop
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);

        if ((arr[i])%2==0>max) {
            max = arr[i];
        }

    }

    printf("%d",max);
    return 0;
}
