#include <stdio.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
void studentFunction(struct student s1);
int main(){
    struct student s1 = {"Iftikar", 22003, 5.21};
    studentFunction(s1);

    return 0;
}
void studentFunction(struct student s1) {
    
    struct student* ptr = &s1;
    printf("Name is %s\n", ptr->name);
    printf("Roll No is %d\n", ptr->roll);
    printf("cgpa is %f", ptr->cgpa);
    
}