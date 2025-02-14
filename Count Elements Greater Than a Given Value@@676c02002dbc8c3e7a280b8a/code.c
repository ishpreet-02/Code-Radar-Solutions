// Your code here...
// Your
#include<stdio.h>
int main(){
    int n;
    int num;
    scanf("%d %d",&n,&num);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>num){
            count++;
        }

        }
    printf("%d",count);
    }
