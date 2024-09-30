#include <stdio.h>
#define SIZE 100 // You can change this to the size of your array

int main() {
    int arr[SIZE], i, n;
    int max, second_max;

    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = second_max = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if(arr[i] > second_max && arr[i] < max) {
            second_max = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second_max);

    return 0;
}