// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(65<a<90){
        printf("Uppercase");
        break;
    }
    else if(97<a<122){
        printf("Lowercase");
        break;
    }
    else{
        printf("Not an alphabet");
    }
}