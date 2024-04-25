// Make a program to input student information from a user & enter it to a file.

#include <stdio.h>
int main(){

    FILE* fptr;

    fptr = fopen("Practice1.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter the name of the student: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name of the student is: %s\n", name);
    fprintf(fptr, "Age of the student is: %d\n", age);
    fprintf(fptr, "cgpa of the student is: %f\n", cgpa);

    fclose(fptr);

    return 0;
}