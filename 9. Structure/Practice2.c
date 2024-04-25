// Create a structure to store complex numbers

#include <stdio.h>

struct complex {
    int real;
    int img;
};
int main(){

    struct complex number1 = {3, 9};
    struct complex* ptr = &number1;
    printf("complex number is %d %c %d%c\n", ptr->real, '+', ptr->img, 'i');

    return 0;
}