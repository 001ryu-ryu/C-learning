#include <stdio.h>
#include <string.h>
int main(){

    char firstStr[] = "Apple";
    char secStr[] = "Banana";

    char firstStr0[] = "HHH";
    char secStr1[] = "HHH";

    char firstStr00[] = "HHA";
    char secStr01[] = "HHB";

    int comp0 = strcmp(firstStr, secStr);
    int comp1 = strcmp(secStr, firstStr);

    int comp2 = strcmp(firstStr0, secStr1);

    int comp3 = strcmp(firstStr00, secStr01);


    printf("first compare: %d\n", comp0);
    printf("second compare: %d\n", comp1);
    printf("third compare: %d\n", comp2);
    printf("fourth compare: %d\n", comp3);

    return 0;
}