#include <stdio.h>
int main(){
    char ch = 'a';
    char *ptr = &ch;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);


    return 0;
}