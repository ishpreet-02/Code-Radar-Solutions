// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int n=strlen(a);
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]=='i'||a[i]=='e'||a[i]=='a'||a[i]=='o'||a[i]=='u'||a[i]=='I'||a[i]=='E'||a[i]=='A'||a[i]=='O'||a[i]=='U''){
            count++;
        }

    }
    printf("%d",count);

}