#include <stdio.h>
int a = 25;
int func1(int a)
{
    static  int mp = 1;

    printf(" the value of static  is %d \n", mp);
    mp ++;
    return 0 ;
}

int main()
{

    int b= 864575;
    int value = func1(a);
    value =func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);

   // printf(" the value of static is %d \n", value);
    
  printf(" the value of func1 is %d \n", a);

    return 0;
}