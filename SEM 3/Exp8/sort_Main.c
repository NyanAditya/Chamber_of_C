int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    display(arr, size);

    // Bubble Sort
    bubbleSort(arr, size);
    printf("Sorted array using Bubble Sort: ");
    display(arr, size);

    // Reset the array for next sorting
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    printf("\nOriginal array: ");
    display(arr1, size);
    insertionSort(arr1, size);
    printf("Sorted array using Insertion Sort: ");
    display(arr1, size);

    // Reset the array for next sorting
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    printf("\nOriginal array: ");
    display(arr2, size);
    selectionSort(arr2, size);
    printf("Sorted array using Selection Sort: ");
    display(arr2, size);

    // Reset the array for next sorting
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    printf("\nOriginal array: ");
    display(arr3, size);
    quickSort(arr3, 0, size - 1);
    printf("Sorted array using Quick Sort: ");
    display(arr3, size);

    // Reset the array for next sorting
    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    printf("\nOriginal array: ");
    display(arr4, size);
    shellSort(arr4, size);
    printf("Sorted array using Shell Sort: ");
    display(arr4, size);

    return 0;
}
