// Your code here...
#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    scanf("%c",&c);
    if(isalpha(c)){
        char lowerCh=tolower(c);
        if(lowerCh=='a'||lowerCh=='e'||lowerCh=='i'||lowerCh=='o'|| lowerCh=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(c)){
        printf("Digit")
    }
    else{
        printf("Special Character")
    }

}