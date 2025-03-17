// Your code here...
// Your code here...
#include <stdio.h>

int main(){
    int n;
    int number;
    scanf("%d %d",&n,&number);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        if(arr[i]==number){
            count++;
        }        
    }

    printf("%d",count);
}