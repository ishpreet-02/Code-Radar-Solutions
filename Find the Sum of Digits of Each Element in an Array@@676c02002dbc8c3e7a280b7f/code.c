#include <stdio.h>
void sum_of_digit(int a){
    if(a<0){
        int b=-a;
        int sum=0;
        while(b>0){
            sum=sum+b%10;
            b=a/10;
        }
              
    }
    printf("%d",sum);
    int sum=0;
    while(a>0){
        sum=sum+a%10;
        a=a/10;
    }
    printf("%d ",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        int a=arr[i];
        sum_of_digit(a);
    }


}