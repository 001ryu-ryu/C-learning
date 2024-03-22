// within a range given by user
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter first range: ");
    scanf("%d", &num1);
    printf("Enter last range: ");
    scanf("%d", &num2);
    for(int i = num1; i <= num2; i++){
        int fac = 1;
        for(int j = 1; j <= i; j++){
            fac = j * fac;
        }
        printf("Factorial of %d is %d \n", i, fac);
    }
    return 0;
}