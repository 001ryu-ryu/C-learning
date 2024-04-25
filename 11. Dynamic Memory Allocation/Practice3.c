// Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    ptr = (int*)calloc(5, sizeof(int));

    printf("Enter the first 5 odd natural number: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
        if(ptr[i]%2 != 1){
            printf("Please enter an odd Number: ");
            scanf("%d", &ptr[i]);
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d\t", ptr[i]);
    }

    ptr = realloc(ptr, 6);

    printf("\n");

    printf("Enter the first 6 even numbers: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &ptr[i]);
        if(ptr[i]&2 != 0){
            printf("Please enter an even number: ");
            scanf("%d", &ptr[i]);
        }
    }
    for(int i = 0; i < 6; i++){
        printf("%d\t", ptr[i]);
    }

    free(ptr);

    return 0;
}