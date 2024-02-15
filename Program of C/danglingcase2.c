#include <stdio.h>
int *dang()
{

    int a, b, sum;

    a = 20;
    b = 30;
    sum = a + b * a - b;

    return &sum;
}
int main()
{
    int *ptr = dang();

    return 0;
}