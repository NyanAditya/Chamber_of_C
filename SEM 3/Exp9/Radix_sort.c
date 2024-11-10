// Function to get the maximum value in an array
int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// Function to perform counting sort based on a specific digit
extern void countingSort(int arr[], int size, int exp);

void radixSort(int arr[], int size)
{
    // Get the maximum number to know the number of digits
    int max = getMax(arr, size);

    // Apply counting sort to sort elements based on each digit
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, size, exp);
}
