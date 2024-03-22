// Syntax
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18? printf("Eligible for vote") : printf("Not eligible for vote");

    return 0;
}