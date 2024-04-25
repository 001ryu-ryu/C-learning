#include <stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    
    struct student s1 = {"Iftikar", 22003, 5.21};

    printf("Name is %s\n", s1.name);
    printf("Roll No is %d\n", s1.roll);
    printf("cgpa is %f\n", s1.cgpa);

    return 0;
}