// Write a program to perform insert and delete operations on Array
#include <stdio.h>

int array[10];
int length = 0;

void insert(int val)
{
    if (length >= 10)
    {
        printf("Array is full.\n");
        return;
    }
    array[length] = val;
    length++;
}

void delete(int val)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (array[i] == val)
        {
            break;
        }
    }
    for (int j = i; j < length - 1; j++)
    {
        array[j] = array[j + 1];
    }
    length--;
}

void printArray()
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    printArray();
    delete (20);
    printArray();
    return 0;
}
// This code provides a simple implementation of insert and delete operations on an array in C.It has a limitation of 10 elements.You can run the program, insert elements into the array, delete elements from the array, and print the array elements at any point.
