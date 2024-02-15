// Write a program to sort the data using selection sort.
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int array[], int size)
{
    int i, j, min_idx;

    for (i = 0; i < size; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            swap(&array[min_idx], &array[i]);
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original array: \n");
    printArray(data, size);

    selectionSort(data, size);

    printf("\nSorted array: \n");
    printArray(data, size);

    return 0;
}
// Selection Sort is another simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part and putting it at the beginning. This algorithm is not suitable for large data sets.
// This program takes an array of integers and sorts it in ascending order using the selection sort algorithm.It has a swap function that swaps two integers, a selectionSort function that sorts the array, and a printArray function that prints the array elements.The main function initializes an array, sorts it using the selectionSort function, and prints the sorted array.
