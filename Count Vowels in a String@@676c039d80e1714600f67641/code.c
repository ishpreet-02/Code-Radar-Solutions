// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int n=strlen(a);
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]=="i"){
            count++;
        }

    }
    printf("%d",count);

}