#include <stdio.h>

int main() {
    int n;
    printf("Enter n (n > 2): ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    // Print the first two Fibonacci numbers
    printf("%d\t%d\t", fib[0], fib[1]);

    // Calculate and print the rest of the Fibonacci numbers
    for(int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }

    return 0;
}
