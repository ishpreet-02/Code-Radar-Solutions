#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int j=0;j<n;j++){
        int num;
        num=arr[j];
        for(int k=0;k<n;k++){
            if(num=arr[k]){
                int count =0;
                count++;
            }
        }
        printf("%d %d",num,count);


    }
    return 0;


}