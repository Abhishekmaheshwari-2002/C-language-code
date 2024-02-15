#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int *));
    int ptr[] = {10, 20, 30, 40, 50};
    printf(" %d", *ptr);
    free(ptr);
    return 0;
}