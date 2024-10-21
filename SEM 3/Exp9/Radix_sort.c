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
void countingSort(int arr[], int size, int exp)
{
    int output[size];
    int count[10] = {0}; // Initialize count array

    // Store the count of occurrences in count[]
    for (int i = 0; i < size; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] contains actual position of this digit in output[]
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now contains sorted numbers
    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

// Function to perform radix sort
void radixSort(int arr[], int size)
{
    // Get the maximum number to know the number of digits
    int max = getMax(arr, size);

    // Apply counting sort to sort elements based on each digit
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, size, exp);
}
