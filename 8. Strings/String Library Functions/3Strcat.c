#include <stdio.h>
#include <string.h>
int main(){

    char firstStr[100] = "Hello ";
    char secStr[] = "World";

    strcat(firstStr, secStr);

    puts(firstStr);

    return 0;
}