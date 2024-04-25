// Write a function to calculate the sum, product and average of 2 numbers. Print that average in the main function.

#include <stdio.h>
void cal(int a, int b, int *sum, int *prod, int *avg);
int main(){
    int a = 3, b = 5;
    int sum, prod, avg;
    cal(a, b, &sum, &prod, &avg);
    printf("sum = %d\nprod = %d\navg = %d\n", sum, prod, avg);


    return 0;
}

void cal(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a*b;
    *avg = *sum/2;
}