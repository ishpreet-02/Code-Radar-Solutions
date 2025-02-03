#include <stdio.h>

int main() {
    int a,b;
    char c;
    if((scanf("%d %d %c",&a,&b,&c))!=3){
        printf("Error");
    }
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);

    }
    else if(c=='/')
    {
        if(b==0){
            printf("error");
        }
        else{
        printf("%",a/b);
    }}
    else{
        printf("error");
    }
    

    return 0;
}