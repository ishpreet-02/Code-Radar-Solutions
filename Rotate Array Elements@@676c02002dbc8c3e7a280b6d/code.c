// Your code here...
// Your code here...
#include<stdio.h>
void rotate(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
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