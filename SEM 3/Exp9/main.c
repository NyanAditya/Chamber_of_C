#include <stdio.h>

// Function declarations (you can also include headers for better organization)
void mergeSort(int arr[], int left, int right);
void radixSort(int arr[], int size);
void countingSort(int arr[], int size);
void bucketSort(float arr[], int size);
void heapSort(int arr[], int size);

// Function to display the array (add this in main.c)
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    // Array for testing sorting algorithms
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Merge Sort
    printf("Original array for Merge Sort: ");
    display(arr1, size1);
    mergeSort(arr1, 0, size1 - 1);
    printf("Sorted array using Merge Sort: ");
    display(arr1, size1);

    // Reset the array for next sorting
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    printf("\nOriginal array for Radix Sort: ");
    display(arr2, size1);
    radixSort(arr2, size1);
    printf("Sorted array using Radix Sort: ");
    display(arr2, size1);

    // Reset the array for next sorting
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    printf("\nOriginal array for Counting Sort: ");
    display(arr3, size1);
    countingSort(arr3, size1);
    printf("Sorted array using Counting Sort: ");
    display(arr3, size1);

    // Reset the array for next sorting
    float arr4[] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("\nOriginal array for Bucket Sort: ");
    display(arr4, size4);
    bucketSort(arr4, size4);
    printf("Sorted array using Bucket Sort: ");
    display(arr4, size4);

    // Reset the array for next sorting
    int arr5[] = {64, 34, 25, 12, 22, 11, 90};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    printf("\nOriginal array for Heap Sort: ");
    display(arr5, size5);
    heapSort(arr5, size5);
    printf("Sorted array using Heap Sort: ");
    display(arr5, size5);

    return 0;
}
