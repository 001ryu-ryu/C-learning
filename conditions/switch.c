// Syntax
#include <stdio.h>
int main(){
    // printing the days
    int day = 8;
    switch(day){
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default: printf("Does not exist");
    }

    return 0;
}