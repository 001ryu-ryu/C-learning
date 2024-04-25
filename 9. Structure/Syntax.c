#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll = 22003;
    s1.cgpa = 7.21;
    // s1.name = "Iftikar";

    strcpy(s1.name, "Iftikar");

    printf("Name of student is %s\n", s1.name);
    printf("Roll No of student is %d\n", s1.roll);
    printf("CGPA of student is %f", s1.cgpa);
    return 0;
}