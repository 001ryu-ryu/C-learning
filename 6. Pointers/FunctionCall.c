#include <stdio.h>
void square(int n);
void _square(int* n);
int main(){
    int number = 5;
    square(number);
    printf("number = %d", number);

    printf("\n");
    printf("\n");

    _square(&number);
    printf("number = %d", number);


    return 0;
}

void square(int n){
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int* n){
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}