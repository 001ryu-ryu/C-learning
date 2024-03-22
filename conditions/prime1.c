// Within a range given by user
#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, i;

    printf("Enter the first range: ");
    scanf("%d", &num1);
    printf("Enter the last range: ");
    scanf("%d", &num2);
    printf("Prime numbers between %d and %d are:\n", num1, num2);

    for (int j = num1; j <= num2; j++) {
        int isPrime = 1;
        if (j <= 1) {
            isPrime = 0;
        } else {
            for (i = 2; i <= sqrt(j); i++) {
                if (j % i == 0) {
                    isPrime = 0;
                    break; 
                }
            }
        }

       
        if (isPrime) {
            printf("%d\n", j);
        }
    }

    return 0;
}
