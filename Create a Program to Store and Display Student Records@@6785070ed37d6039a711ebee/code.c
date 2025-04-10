// Your code here...
struct student{
    int roll;
    char name;
    float marks;

};
int main(){
    int n;
    scanf("%d",&n);
    struct student as s;
    for (i = 0; i < n; i++) {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%f", &s[i].fees);  

    }
    for (i = 0; i < n; i++) {
        printf("Roll Number: %d, ", s[i].roll);       
        printf("Name: %s, ", s[i].name);
        printf("Marks: %.2f\n", stud[i].fees);

    }


}