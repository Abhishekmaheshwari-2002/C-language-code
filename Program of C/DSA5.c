// Write a program to sort the data using quick sort.
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
/*

This program sorts an array using the quick sort algorithm. The quick sort algorithm works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted.

Here are the steps:

First, the program initializes an array of integers with the numbers to be sorted.

The quickSort function is then called to sort the array. This function takes three parameters: the array, the low index, and the high index.

Inside the quickSort function, the base case of the recursion is first checked: if the low index is greater than or equal to the high index, the function returns without doing anything. This indicates that the sub-array is either empty or contains only one element, and hence is already sorted.

Next, the partition function is called. This function takes the array, the low index, and the high index as parameters. It selects the last element of the array as the pivot, and then iterates over the elements in the array, comparing each element to the pivot. If an element is found that is less than the pivot, it is swapped with the element at the index i, which is initially set to low - 1.

After all the elements in the array have been processed, the function swaps the pivot element (which is currently at the high index) with the element at the index i + 1. This results in the pivot being in its final sorted position, with all the elements less than the pivot being in the sub-array before it, and all the elements greater than the pivot being in the sub-array after it.

Finally, the quickSort function is called recursively for the two sub-arrays, by passing the current low index and the index i - 1 as the new high index for the sub-array before the pivot, and the index i + 1 as the new low index and the current high index as the new high index for the sub-array after the pivot.

When the recursion is complete, the sorted array is printed out
*/
