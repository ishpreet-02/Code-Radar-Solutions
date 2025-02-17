// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>12){
        printf("Invalid month");
    }
    else if(n==2){
        printf("%d",28);

    }
    else if(n==12){
        printf("%d",31);
    }
    else if(n>2 && n<12){

        if(n%2==0){
            printf("%d",30)};
        else if(n%2!=0){
            printf("%d",31);
    }}

}