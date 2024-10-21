#include <stdio.h>

// Function declarations for sorting algorithms
void bubbleSort(int arr[], int size);
void insertionSort(int arr[], int size);
void selectionSort(int arr[], int size);
void quickSort(int arr[], int low, int high);
void shellSort(int arr[], int size);

// Function to display the array
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array for Bubble Sort: ");
    display(arr1, size1);
    bubbleSort(arr1, size1);
    printf("Sorted array using Bubble Sort: ");
    display(arr1, size1);

    // Reset the array for next sorting
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nOriginal array for Insertion Sort: ");
    display(arr2, size2);
    insertionSort(arr2, size2);
    printf("Sorted array using Insertion Sort: ");
    display(arr2, size2);

    // Reset the array for next sorting
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("\nOriginal array for Selection Sort: ");
    display(arr3, size3);
    selectionSort(arr3, size3);
    printf("Sorted array using Selection Sort: ");
    display(arr3, size3);

    // Reset the array for next sorting
    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);

    printf("\nOriginal array for Quick Sort: ");
    display(arr4, size4);
    quickSort(arr4, 0, size4 - 1);
    printf("Sorted array using Quick Sort: ");
    display(arr4, size4);

    // Reset the array for next sorting
    int arr5[] = {64, 34, 25, 12, 22, 11, 90};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);

    printf("\nOriginal array for Shell Sort: ");
    display(arr5, size5);
    shellSort(arr5, size5);
    printf("Sorted array using Shell Sort: ");
    display(arr5, size5);

    return 0;
}
