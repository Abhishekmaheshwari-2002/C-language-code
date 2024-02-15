#include <stdio.h>

int main()
{
    int n = 5;
    int m = 3;
    long long int var = 1;
    printf(" 1) n is digit \n");
    printf(" 2) m  is a power of n digit  \n");
    //   printf(" enter the value of n \n");
    // scanf(" %d ", &n);
    //    printf(" enter the value of m\n");
    //  scanf(" %d ", &m);
             
    for (int i = 0; i < m; i++)
    {

        var = var * n;
    }

    printf("  your answer is squre %d of %d : %lld ", n, m, var);

    return 0;
}