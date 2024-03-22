// Syntax
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are eligible for vote.");
    }
    else if(age >= 13 && age <= 18){
        printf("You are a teen. Wait %d year(s)", 18-age);
    } else{
        printf("You will be eligible after %d year(s)", age);
    }

    return 0;
}