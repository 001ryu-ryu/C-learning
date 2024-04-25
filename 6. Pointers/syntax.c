#include <stdio.h>
int main(){

    int age = 20;
    int* ptr = &age;
    int _age = *ptr;
    printf("%d", _age);



    return 0;
}