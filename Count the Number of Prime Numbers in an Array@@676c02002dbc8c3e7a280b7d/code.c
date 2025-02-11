// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    int prime =0;
    int nonprimes=0;

    for (int i = 1; i <=n; i++) {
        scanf("%d", &arr[i]);
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j=0){
                nonprimes++;}
            else{
                prime++;
        }


    }}

    printf("%d",prime);
    return 0;
}