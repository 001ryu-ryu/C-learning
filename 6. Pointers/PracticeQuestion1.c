#include <stdio.h>
int main(){
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    printf("\n");
    printf("\n");

    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d", *ptr);

    printf("\n");
    printf("\n");

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d", *ptr);



    return 0;
}