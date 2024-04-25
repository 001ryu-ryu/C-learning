#include <stdio.h>
int main(){

    FILE* fptr;

    fptr = fopen("Test.txt", "a");

    // This is by fprintf
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    //this is by fputc");

    fputc(' ', fptr);
    fputc('A', fptr);
    fputc('P', fptr);
    fputc('P', fptr);
    fputc('L', fptr);
    fputc('E', fptr);
    fclose(fptr);

    return 0;
}