#include <stdio.h>
int main()
{
    int n = 7;
    int result = 1;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            result = 0;
        }
    }
    if (result)
    {
        printf(" this %d  number is  prime number\n", n);
    }
    else
    {
        printf(" this %d is not  prime number\n", n);
    }

    return 0;
}
