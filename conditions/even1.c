// Check in a range given by user
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first number of the range: ");
    scanf("%d", &num1);
    printf("Enter the last number of the range: ");
    scanf("%d", &num2);
    printf("Even numbers between %d and %d are:\n", num1, num2);
    for(int i = num1; i <= num2; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }

    }
    return 0;
}