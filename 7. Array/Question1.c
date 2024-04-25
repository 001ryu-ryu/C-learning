// Write a program to enter price of 3 items and print their final cost with gst.

#include <stdio.h>
int main(){
    float price[3];
    printf("Enter 3 prices:  \n");
    scanf("%fn", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price for 1: %f\n", price[0]+(0.18*price[0]));
    printf("total price for 2: %f\n", price[1]+(0.18*price[1]));
    printf("total price for 3: %f\n", price[2]+(0.18*price[2]));
    
    


    return 0;
}