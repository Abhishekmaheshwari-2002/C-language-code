#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf(" enter the last number of natural\n ");
    scanf("%d", &n);
    //  for (int i = 1; i <= n; i++)
    //{
    //  sum += i;
    // }
    sum = n * (n + 1) / 2;
    printf(" The sum of naturl number : %d\n", sum);
    return 0;
}