// Syntax using character
#include <stdio.h>
int main(){
    char day = 'T';
    switch(day){
        case 'm': printf("Monday");
                break;
        case 't': printf("Tuesday");
                break;
        case 'w': printf("Wednesday");
                break;
        case 'T':
                printf("Thursday");
                break;
        case 'f':
                printf("Friday");
                break;
        case 's':
                printf("Saturday");
                break;
        case 'S':
                printf("Sunday");
                break;
        default: printf("Not valid");
    }
  return 0;
}