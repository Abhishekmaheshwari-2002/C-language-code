// Write a program to read an array of integers, and a value to search.Check if the the given value is present in the array, using Linear Search and Binary Search
#include <stdio.h>

void linear_search(int arr[], int n, int search_value)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search_value)
        {
            printf("Element found at index %d in Linear Search.\n", i);
            return;
        }
    }
    printf("Element not found in Linear Search.\n");
}

void binary_search(int arr[], int n, int search_value)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == search_value)
        {
            printf("Element found at index %d in Binary Search.\n", mid);
            return;
        }
        if (arr[mid] < search_value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found in Binary Search.\n");
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search_value;
    printf("Enter a value to search: ");
    scanf("%d", &search_value);

    linear_search(arr, n, search_value);
    binary_search(arr, n, search_value);

    return 0;
}