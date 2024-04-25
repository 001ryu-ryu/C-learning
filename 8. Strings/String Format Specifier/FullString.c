#include <stdio.h>
int main(){

    char str[100];
    // gets(str); unsafe

    fgets(str, 100, stdin);
    puts(str);


    return 0;
}