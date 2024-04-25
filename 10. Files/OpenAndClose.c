#include <stdio.h>
int main(){
    FILE *fptr;

    fptr = fopen("Ttest.txt", "w");
    if(fptr == NULL) {
        printf("File does not exist\n");
    } else {
        fclose(fptr);
    }
    
    return 0;
}