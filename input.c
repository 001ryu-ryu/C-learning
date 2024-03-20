#include <stdio.h>

int main() {
    int num1, num2, sum, sub, mul, div, rem;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1/num2;
    rem = num1 % num2;

    
    printf("Addition is %d \n", sum);
    printf("Subtraction is %d \n", sub);
    printf("Multiplication is %d \n", mul);
    printf("Division is %d \n", div);
    printf("Reminder is %d \n", rem);
    return 0;
}