// Write a program to sort the data using insertion sort.
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
// This program sorts an array using the Insertion Sort algorithm.The user is prompted to enter the number of elements in the array and the elements themselves.The elements are then sorted in ascending order using the Insertion Sort algorithm.

//     Insertion Sort works by iterating over the array and treating the space before the current element as a sorted subarray.It compares the current element with the last element of the sorted subarray.If the current element is smaller,
//     it compares it with the second last element, and so on, until it finds a place where it can be inserted in the sorted subarray.It then shifts all the elements in the sorted subarray to the right and inserts the current element at the found position.

//                                                             This process continues until the entire array is sorted