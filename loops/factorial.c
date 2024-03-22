#include <stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int fac = 1;
    for(int i = 1; i<=number;i++){
        fac= i * fac;
    }
    printf("Factorial of %d is %d ", number, fac);

    return 0;

}