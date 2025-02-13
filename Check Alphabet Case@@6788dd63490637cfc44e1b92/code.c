// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(65<a<90){
        printf("Uppercase");
    }
    else if(97<a<122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}