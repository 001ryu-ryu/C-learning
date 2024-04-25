#include <stdio.h>
int main(){
    int marks[2][3];
    marks[0][0] = 98;
    marks[0][1] = 99;
    marks[0][2] = 100;

    marks[1][0] = 97;
    marks[1][1] = 96;
    marks[1][2] = 90;

    printf("%d", marks[1][0]);


    return 0;
}