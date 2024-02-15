#include <stdio.h>
int main()
{
    int n;
    int counter = 0;
    printf(" enter the number\n ");
    scanf(" %d", &n);
    printf("  the number is %d\n ", n);
    for (int i = 0; n != 0; counter++)
    {
        n = n / 10;
    }
    printf("the number of digit is:  %d\n", counter);

    return 0;
}