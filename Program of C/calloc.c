#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n;

    printf(" enter the value of array of memory do you want \n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf(" enter the value of array no of %d of  \n", i);
        scanf("%d", &ptr[i]);
    }
free(ptr);
    return 0;
}