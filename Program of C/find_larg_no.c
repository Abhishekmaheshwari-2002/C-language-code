#include <stdio.h>
int largeno(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 0,1};
    
    for (int i = 0; i < 10; i++)
    {
        printf(" your  arr [ %d ]  element is : %d\n ", i, arr[i]);
    }

    int max = largeno(arr, 9);

    printf(" the large number of arrry is :%d \n", max);
    return 0;
}