// Your code here...
// Your code here...
#include<stdio.h>
void rotate(int arr[], int n,int m) {
    
    for (int i = 0; i < n; i++) {
        int first = arr[n-m-i];
        arr[n-m-i] = arr[i];
        arr[i] = first;
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
    rotate(arr,n,rotate_no);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }

}