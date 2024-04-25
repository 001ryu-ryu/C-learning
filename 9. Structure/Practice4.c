// Make a structure to store Bank Account Information of a customer of ABC Bank. Also, make an alias for it.

#include <stdio.h>

typedef struct BankAccountInformation {
    int accountNo;
    char name[100];
} acc ;
int main(){

    acc customer = {3434, "Ryu"};
    acc* ptr = &customer;
    printf("Name of the account holder is %s and the Account Number is %d", ptr->name, ptr->accountNo);

    return 0;
}