// Make a program to read 5 integers from a file.
#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("Practice0.txt", "r");

    int n;

    fscanf(fptr, "%d", &n); // Add '&' before n
    printf("Number = %d\n", n);

    fscanf(fptr, "%d", &n); // Add '&' before n
    printf("Number = %d\n", n);

    fscanf(fptr, "%d", &n); // Add '&' before n
    printf("Number = %d\n", n);

    fscanf(fptr, "%d", &n); // Add '&' before n
    printf("Number = %d\n", n);

    fscanf(fptr, "%d", &n); // Add '&' before n
    printf("Number = %d\n", n);

    fclose(fptr);

    return 0;
}
