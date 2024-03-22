// Syntax
#include <stdio.h>
int main(){
   int age = 17;
   if(age >= 18){
    printf("You are eligible for vote\n");
   } else{
    printf("You will be eligible after %d year(s)", 18-age);
   }

   return 0;
}
