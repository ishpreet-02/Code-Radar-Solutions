#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int count;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[n-1]) {
            count++;
            if(count>1){
                printf("%d", arr[i]); 
                return 0; 

            }

        }
    }

    printf("-1");
    return 0;
}
