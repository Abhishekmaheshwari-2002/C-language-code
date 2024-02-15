#include <stdio.h>
int main()
{
    typedef int*  ip;

    ip a, b;
    int c = 26;

    a = &c;
    b = &c;
    printf (" value of %d and%d  ",*a,*b);

    return 0;
}
