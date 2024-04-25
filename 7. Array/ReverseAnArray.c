#include <stdio.h>
void reverse(int arr[], int n);
void print(int arr[], int n);
int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6};
    reverse(numbers, 6);
    print(numbers, 6);


    return 0;
}

void reverse(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}