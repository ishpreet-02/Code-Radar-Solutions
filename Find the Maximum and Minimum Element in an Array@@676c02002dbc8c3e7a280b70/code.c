// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    scanf("%d", &arr[0]);
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d %d", min, max);
    return 0;
}
