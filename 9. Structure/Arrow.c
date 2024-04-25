#include <stdio.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){

    struct student s1 = {"Iftikar", 22003, 5.21};
    struct student* ptr = &s1;

    printf("Name is %s\n", ptr->name);
    printf("Roll No is %d\n", ptr->roll);
    printf("cgpa is %f\n", ptr->cgpa);

    return 0;
}