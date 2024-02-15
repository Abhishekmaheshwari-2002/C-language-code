#include <stdio.h>

int result(int n)
{

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1, n2;
    printf(" enter the value of n1 \n");
    scanf("%d", &n1);
    printf(" enter the value of n2 \n");
    scanf("%d", &n2);

    printf(" The range of where we find prime number  is : %d and %d \n", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        if (result(i))
        {
            printf("  the prime number is between %d to %d :  %d\n  ", n1, n2, i);
        }
    }

    return 0;
}