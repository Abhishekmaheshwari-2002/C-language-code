#include <stdio.h>
int main()
{
    printf("file name is %s\n", __FILE__);
    printf(" today date is %s\n", __DATE__);
    printf(" line no.  is %d\n", __LINE__);
    printf(" now time  is %d\n", __TIME__);
    printf(" anci is :%d \n", __STDC__);
    return 0;
}