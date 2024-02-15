// Write a program to search the data using linear search
#include <stdio.h>

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int result = linear_search(arr, n, key);
    printf("Key found at index %d\n", result);

    return 0;
}
/*
A linear search is a simple searching algorithm that sequentially checks each element of a list or array until the desired value(also known as the key) is found or the end of the list / array is reached.The time complexity of a linear search is O(n), where n is the of elements in the / array.This is because, in the worst - case scenario, the algorithm may need to check every element before finding the key.

In this program, the linear_search function takes an array arr[], its size n, and the key to be searched as input.It then iterates through each element of the array and checks if it matches the key.If a match is found, the function returns the index of the element.If the key is not found in the array, the function returns - 1.

  In the main function,
we define an array arr[] with five elements, set the key to be searched to 5, and call the linear_search function with arr[], its size, and the key as input.If the key is found, we print the index at which it was found.Otherwise, we print a message indicating that the key was not found in the array.
The space complexity of a linear search is O(1),
    as the algorithm only
    requires a
constant amount of memory to store the index variable i and the temporary variable used to store the key.

    It's worth noting that a linear search is not the most efficient searching algorithm for large lists/arrays. Other algorithms, such as binary search, can perform better in such cases. However, a linear search is still a useful algorithm for small lists/arrays or when the order of elements is not important.

    Scroll to bottom

*/