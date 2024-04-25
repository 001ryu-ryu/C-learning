// Write a program to allocate memory to store 5 prices

#include <stdio.h>
#include <stdlib.h>
int main(){

    float* ptr;
    ptr = (float *)malloc(5*sizeof(float));

    ptr[0] = 56.78;
    ptr[1] = 80.00;
    ptr[2] = 99.9;
    ptr[3] = 78.00;
    ptr[4] = 999.00;

    for(int i = 0; i < 5; i++){
        printf("%f\n", ptr[i]);
    }

    free(ptr);


    return 0;
}