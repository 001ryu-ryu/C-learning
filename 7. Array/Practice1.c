// Write a function to count the numbers of odd numbers in a n array

#include <stdio.h>
int countOdd(int *arr, int n);
int main(){
    int numbers[] = {1, 2, 3, 9, 10, 11, 78, 69};

    

    printf("%d", countOdd(numbers, 8));
    

    
    

    return 0;
}

int countOdd(int *arr, int n){
    int count = 0;
    

    for(int i =0; i < n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}