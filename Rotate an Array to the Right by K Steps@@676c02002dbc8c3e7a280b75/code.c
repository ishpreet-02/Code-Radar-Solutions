// Your code here...
#include <stdio.h>
void rotate(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];

    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n;
    rotate(arr,n,n-k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}