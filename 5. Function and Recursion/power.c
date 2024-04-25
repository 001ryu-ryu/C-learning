// Power calculator
#include <stdio.h>
#include <math.h>
double power(float a, float b);
int main(){
    float num1, num2;
    printf("Enter the number and power to find: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    printf("%f", power(num1, num2));


    return 0;
}

double power(float a, float b){
    return pow(a, b);
}