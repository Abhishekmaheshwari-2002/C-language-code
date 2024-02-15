// Write a program to read an array of integers. Sort this array using a) Insertion Sort, Selection Sort, Bubble Sort and Quick Sort and display it in C language
#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void insertionSort(int array[], int length);
void selectionSort(int array[], int length);
void bubbleSort(int array[], int length);
void quickSort(int array[], int start, int end);
void printArray(int array[], int length);
// 10 5 6 12 8 9 element
// 0  1 2 3  4 5 index number
// Function to implement Insertion Sort
void insertionSort(int array[], int length)
{
    int i, j, key;
    for (i = 1; i < length; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

// Function to implement Selection Sort
void selectionSort(int array[], int length)
{
    int i, j, minIndex, temp;
    for (i = 0; i < length - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < length; j++)
            if (array[j] < array[minIndex])
                minIndex = j;
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

// Function to implement Bubble Sort
void bubbleSort(int array[], int length)
{
    int i, j, temp;
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to implement Quick Sort
void quickSort(int array[], int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(array, start, end);
        quickSort(array, start, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, end);
    }
}

int partition(int array[], int start, int end)
{
    int pivot = array[end];
    int i = (start - 1);
    for (int j = start; j <= end - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[end]);
    return (i + 1);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print the array
void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int array[] = {12, 11, 13, 5, 6};
    int length = sizeof(array);

    printf("Original Array: \n");
    printArray(array, length);

    printf("\nSorted Array using Insertion Sort: \n");
    insertionSort(array, length);
    printArray(array, length);

    printf("\nSorted Array using Selection Sort: \n");
    selectionSort(array, length);
    printArray(array, length);

    printf("\nSorted Array using Bubble Sort: \n");
    bubbleSort(array, length);
    printArray(array, length);

    printf("\nSorted Array using Quick Sort: \n");
    quickSort(array, 0, length - 1);
    printArray(array, length);

    return 0;
}