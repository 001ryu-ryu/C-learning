// make a program that inputs user's name and prints its length.

#include <stdio.h>
int countLength(char arr[]);
void printString(char arr[]);
int main(){
    char name[100];

    printf("Enter your name: ");

    fgets(name, 100, stdin);
    
    printString(name);
    printf("Length is %d ", countLength(name));


    return 0;
}
void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}

int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}