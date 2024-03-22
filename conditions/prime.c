#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is prime or not
    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0; // If divisible by any number other than 1 and itself, not prime
                break;
            }
        }
    }

   
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
