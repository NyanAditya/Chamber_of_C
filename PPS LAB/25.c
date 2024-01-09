// Bubble Sort Algorithm
// 25. Write a program to sort an array of integers using bubble sort algorithm.
// Author: Aditya Singh

#include <stdio.h>

void bubbleSort(int arr[], int len){

    int i, j;
    for (i = 0; i < len-1; i++) {
        for (j = 0; j < len-i-1; j++) {
            if (arr[j] > arr[j+1]) {

                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, len);

    printf("Sorted array: \n");

    for (int i=0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
