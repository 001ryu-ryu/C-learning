#include <stdio.h>
#include <string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student ece[100];

    ece[0].roll = 22003;
    ece[0].cgpa = 5.21;
    strcpy(ece[0].name, "Iftikar");

    ece[1].roll = 22322;
    ece[1].cgpa = 5;
    strcpy(ece[1].name, "Dipankar");


    ece[2].roll = 22301;
    ece[2].cgpa = 5.04;
    strcpy(ece[2].name, "Rituporno");

    printf("Name of student 1 is %s\n", ece[0].name);
    printf("Roll No of %s is %d\n", ece[0].name, ece[0].roll);
    printf("cgpa of %s is %f\n", ece[0].name, ece[0].cgpa);

    printf("\n");

    printf("Name of student 2 is %s\n", ece[1].name);
    printf("Roll No of %s is %d\n", ece[1].name, ece[1].roll);
    printf("cgpa of %s is %f\n", ece[1].name, ece[1].cgpa);

    printf("\n");

    printf("Name of student 3 is %s\n", ece[2].name);
    printf("Roll No of %s is %d\n", ece[2].name, ece[2].roll);
    printf("cgpa of %s is %f\n", ece[2].cgpa);

    return 0;
}