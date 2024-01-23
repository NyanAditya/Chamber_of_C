// A program to sort the elements of an array in ascending order using the Bubble Sort algorithm.
// Author: Aditya Singh

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){

    int arr[]={9,5,3,-1,45,58,7,0,565};

    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap((arr+j), (arr+j+1));
            }
        }
    }

    printf("Sorted array: ");
    for (int i=0; i<size; i++){
        printf("%d ", i[arr]);
    }

    return 0;
}