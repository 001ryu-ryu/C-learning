// Create a structure to store vectors. Then make a function to return sum of 2 vectors;

#include <stdio.h>
struct vectors {
    int x;
    int y;
};

void printVector(struct vectors v1, struct vectors v2, struct vectors sum);
int main(){

    struct vectors v1 = {2, 3};
    struct vectors v2 = {4, 5};
    struct vectors sum = {0};

    printVector(v1, v2, sum);
    return 0;
}

void printVector(struct vectors v1, struct vectors v2, struct vectors sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is %d\n", sum.x);
    printf("Sum of y is %d\n", sum.y);
}