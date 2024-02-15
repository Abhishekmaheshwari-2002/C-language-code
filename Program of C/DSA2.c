// Write a program to sort the data using bubble sort
#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size; ++step)
    {
        for (int i = 0; i < size - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                // Swap if greater is at the rear position
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }  
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
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

    bubbleSort(data, size);

    printf("\nSorted array: \n");
    printArray(data, size);

    return 0;
}

// Bubble Sort is a simple sorting algorithm that works by repeatedly stepping through the list,
// comparing each pair of adjacent items and swapping them if they are in the wrong order.The pass
// through the list is repeated until the list is sorted.

// This program takes an array of integers and sorts it in ascending order using the bubble sort
// algorithm.It has a bubbleSort function that sorts the array, and a printArray function that prints
// the array elements.The main function initializes an array, sorts it using the bubbleSort function,
// and prints the sorted array.