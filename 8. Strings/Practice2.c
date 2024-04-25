// Write a function to count the occurrence of vowels in a string.

#include <stdio.h>

int countVowels(char str[]);
int main(){

    char str[] = "iftikar";
    printf("Total number of vowels are %d ", countVowels(str));

    return 0;
}

int countVowels(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }

    return count;
}