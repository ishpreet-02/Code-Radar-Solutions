#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<45;i++){
        int present=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                present=1;
                break;
            }
        }
        if(present==0){
            printf("%d",i);
            break;
        }
    }
}