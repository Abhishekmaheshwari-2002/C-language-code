#include <stdio.h>

void arrrev(int arr[])
{

    int temp;
    for (int i = 0; i < 10 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("before reverse array print here\n ");
    for (int i = 0; i < 10; i++)
    {
        printf(" the array  is printed for %d here before reverse below  %d\n ", i, arr[i]);
    }
    printf("after reverse array print here\n ");

    arrrev(arr);
    for (int i = 0; i < 10; i++)
    {
        printf(" the array is printed here for %d after reverse below %d \n ", i, arr[i]);
    }

    return 0;
}
