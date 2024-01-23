// A program to sort an array of integers in ascending order using insertion sort and selection sort.
// Author: Aditya Singh

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insSort(int arr[], int size)
{
    // Traverse through each element of the array
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Shift the elements of the sorted array that are greater than the key to one position ahead of their current position
        while ((j >= 0) && (arr[j] > key))
        {

            swap(&arr[j], &arr[j + 1]);
            j--;
        }
    }
}

void selSort(int arr[], int size)
{

    // Traverse through each element of the array
    for (int i = 0; i < size - 1; i++)
    {
        int *min = &arr[i];

        // Find the minimum element in the unsorted array
        for (int j = i + 1; j < size; j++)
        {

            if (arr[j] < *min)
                min = &arr[j];
        }

        // Swap the minimum element of the unsorted array with the first element of the unsorted array
        swap(&arr[i], min);
    }
}

int main()
{

    int arr1[] = {12, 11, 13, 5, 6, -1, 0};
    int arr2[] = {-3, 5, -1, 8, -2, 4};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Original arrays: \n");
    printf("Array 1: "); printarr(arr1, size1);
    printf("Array 2: "); printarr(arr2, size2);

    printf("Insertion Sorted array: \n");
    insSort(arr1, size1); printarr(arr1, size1);

    printf("Selection Sorted array: \n");
    selSort(arr2, size2); printarr(arr2, size2);

    return 0;
}