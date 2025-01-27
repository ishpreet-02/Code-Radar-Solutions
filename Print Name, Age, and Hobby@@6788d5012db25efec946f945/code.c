#include <stdio.h>


int main() {
    char a;
    int b;
    char c;
    scanf("%c %d",&a,&b);
    scanf("%c",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);

    return 0;
}