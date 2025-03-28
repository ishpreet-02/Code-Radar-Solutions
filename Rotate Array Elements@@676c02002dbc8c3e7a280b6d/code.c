// Your code here...
// Your code here...
#include<stdio.h>
void rotate(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        int first = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = first;
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rotate_no;
    scanf("%d",&rotate_no);
    rotate(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }

}