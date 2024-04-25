#include <stdio.h>
int main(){

    FILE* fptr;
    fptr = fopen("Test.txt", "r");

    char ch;

    
    fscanf(fptr, "%c", &ch);
    printf("This is from fscanf: %c", ch);
    

    printf("\n");

    printf("This is from fgetc: %c", fgetc(fptr));


    fclose(fptr);

    return 0;
}