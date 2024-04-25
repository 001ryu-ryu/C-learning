// Enter address (house no, block, city, state) of five people.

#include <stdio.h>
struct address {
    int houseNo;
    int block;
    char city[50];
    char state[50];
};
void printData(struct address add);
int main(){
    struct address adds[5];

    printf("Enter info for person 1: \n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for person 2: \n");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for person 3: \n");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter info for person 4: \n");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for person 5: \n");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);
    
    printData(adds[0]);
    printData(adds[1]);
    printData(adds[2]);
    printData(adds[3]);
    printData(adds[4]);
    
    return 0;
}

void printData(struct address add){
    printf("Address is: %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
    
}