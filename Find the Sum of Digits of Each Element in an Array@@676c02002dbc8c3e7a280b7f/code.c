#include <stdio.h>
void sum_of_digit(int a){
    int b=0;
    int sum=0;
    if(a<0){
        b=-a;
        int sum=0;
        while(b>0){
            sum=sum+b%10;
            b=b/10;
        }
        printf("%d",sum);
              
    }
    
    
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