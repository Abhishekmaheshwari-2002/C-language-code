#include <stdio.h>
int main()
{
    int *dang;
    {
        int a;

        a = 20;

        dang = &a;
    }

    return 0;
}