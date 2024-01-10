// 21. Write a program to find the sum of all elements of an array.
// Author: Aditya Singh (NyanAitya)

#include <stdio.h>

int main() {
    int n, i, size, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}
