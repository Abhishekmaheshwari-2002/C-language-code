#include <stdio.h>
#include"tabl.c"
#define PI 3.14
#define SQURAE(x) x*x*x

int main()
{ 
    int x=5;
    float a = PI;
    printf(" the value of a is %f\n ", a);
printf(" the cube of a is %d ",SQURAE(x));
    return 0;
}