#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isalpha(a)){
        char lowercase=tolower(a);
        if(lowercase=='a'||lowercase=='e'||lowercase=='i'||lowercase=='o'||lowercase=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}