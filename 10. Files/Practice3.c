// 2 numbers a and b are written in a file. Write a program to replace them with their sum.
#include <stdio.h>
int main(){

    FILE* fptr;

    fptr = fopen("Practice3.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);

    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("Practice3.txt", "w");

    int sum = a + b;

    fprintf(fptr, "%d", sum);

    fclose(fptr);
    
    return 0;
}