#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }}
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
 
        scanf("%d",&arr[i]);

    }
    bubbleSort(arr,n);
    int count = 1;  
    for (int i = 1; i <= n; i++) {  
        if (i < n && arr[i] == arr[i - 1]) {
            count++;
        } else {
            printf("%d %d\n", arr[i - 1], count);
            count = 1; 
    }}
    return 0;


}