// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    int odd=0;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];


    }}
    printf("%d",max);
    return 0;


}