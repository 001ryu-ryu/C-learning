#include <stdio.h>
#include <string.h>
int main(){

    char oldStr[] = "oldStr";
    char newStr[] = "newStr";

    strcpy(newStr, oldStr);
    puts(newStr);

    return 0;
}