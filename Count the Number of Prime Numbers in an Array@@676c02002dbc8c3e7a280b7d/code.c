// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    int prime =0;

    for (int i = 1; i <=n; i++) {
        scanf("%d", &arr[i]);
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                prime++;}
        }


    }

    printf("%d",prime);
    return 0;
}