#include <stdio.h>

int sum(int a, int b)
{

    return a + b;
}

int main()
{
    int (*fptr)(int, int);
    fptr = &sum;
    int c = (*fptr)(5, 5);
    printf(" the sum of the number without using  function pointer %d\n\n", c);
    printf(" the sum of the number by using function pointer %d\n\n", c);

    //  printf(" The sum of 1 and 2 is : %d\n", sum(2, 5));
    return 0;
}