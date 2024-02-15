#include <stdio.h>

//int fac(int n)
///{
//   int f1 = 1;
//  for (int i = n; i > 1; i--)
// {
//    f1 *= i;
//}

// return f1;
///}

int main()
{
    int n;
    //int n1;
    int val = 1;
    cout(" enter the value of val");
    scanf(" %d \n", &n);
    for (int i = n; i > 0; i--)
    {
        val *= i;
    }

    // n1 = fac(n);
    printf(" the fac. of is : %d", val);

    return 0;
}