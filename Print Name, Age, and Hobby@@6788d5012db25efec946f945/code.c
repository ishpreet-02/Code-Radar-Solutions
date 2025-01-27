#include <stdio.h>


int main() {
    char a;
    int b;
    char c;
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);

    return 0;
}