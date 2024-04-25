#include <stdio.h>
int main(){
    int age = 21;
    int* ptr = &age;
    int _age = *ptr;

    // print address
    printf("%p\n", &age);
    printf("%u\n", &age); //u is unsigned int
    printf("%p\n", ptr);
    printf("%u\n", ptr);
    printf("%p\n", &ptr);
    printf("%u\n", &ptr);

    printf("\n");
    printf("\n");
   

    // to print data
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", _age);
    printf("%d\n", *(&age));



    return 0;
}