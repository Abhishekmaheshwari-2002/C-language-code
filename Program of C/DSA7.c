// Write a program to search the data using binary search.

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        return binarySearch(arr, mid + 1, high, x);
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        printf("Element is present at index %d", result);
    else
        printf("Element is not present in array");
    return 0;
}

/*
This program searches for a data item in a sorted array using the binary search algorithm. The binary search algorithm works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, the function continues to search in the lower half. Otherwise, it continues to search in the upper half. This process continues until the function finds the value it is searching for or until the search interval is empty.

Here are the steps:

First, the program initializes an array of integers with the numbers in the sorted array.

The binarySearch function is then called to search for the data item. This function takes four parameters: the array, the low index, the high index, and the data item to be searched for.

Inside the binarySearch function, the base case of the recursion is first checked: if the high index is less than the low index, the function returns -1, indicating that the data item is not present in the array.

Next, the function calculates the middle index by adding the low index and the high index and dividing the result by 2.

The function then compares the data item to be searched for with the item at the middle index. If the data item is found, the middle index is returned.

If the data item is less than the item at the middle index, the binarySearch function is called recursively for the lower half of the array, by passing the low index, the middle index minus 1 as the new high index, and the data item to be searched for.

If the data item is greater than the item at the middle index, the binarySearch function is called recursively for the upper half of the array, by passing the middle index plus 1 as the new low index, the high index, and the data item to be searched for.

When the function returns, if the return value is -1, it means that the data item is not present in the array. Otherwise, the return value is the index of the data item in the array.

Finally, the result of the search is printed out*/