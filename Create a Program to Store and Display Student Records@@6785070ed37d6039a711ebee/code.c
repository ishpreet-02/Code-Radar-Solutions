// Your code here...
#include<stdio.h>

struct student{
    int roll;
    char name[50];
    float marks;

};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].roll);
        scanf("%s", &s[i].name);
        scanf("%f", &s[i].marks);  

    }
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, ", s[i].roll);       
        printf("Name: %s, ", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);

    }


}