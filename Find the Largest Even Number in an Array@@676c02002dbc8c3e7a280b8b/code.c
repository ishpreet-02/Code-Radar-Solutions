// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if ((arr[i])%2==0) 
        {
            if(arr[i]>max){
                max = arr[i];

            }
        }
    }
    if(max%2!=0){
        max=-1;
    }
    printf("%d",max);
    return 0;
}
