#include <stdio.h>
void rotate(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++){
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
    rotate(arr,n,k)
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}