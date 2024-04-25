#include <stdio.h>

int fib(int n);

int main() {
     printf("fibonacci sequence upto 6 is ");
    for(int i = 0; i <= 6; i++){
        printf("%d ", fib(i));
    }
   
    return 0;
}

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
