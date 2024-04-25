// Check if a given character is present in a string or not.

#include <stdio.h>
void checkCharacter(char str[], char ch);
int main(){
    char str[100];
    char ch;

    printf("Enter the string(no space allowed): ");
    scanf("%s", str);

    printf("Enter the character you want to check: ");
    
    getchar(); // Consume any newline characters left in the input buffer

    scanf("%c", &ch);
    

    checkCharacter(str, ch);

    return 0;
}

void checkCharacter(char str[], char ch){
    
    

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            puts("Yes");
            return;
        }
        
    }
    puts("No");
}