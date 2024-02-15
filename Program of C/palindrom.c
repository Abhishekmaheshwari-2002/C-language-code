#include <stdio.h>
#include <stdlib.h>
int plnd(num)
{
    int reversed = 0;
    int realnumber = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num=num / 10;
    }
   printf(" your reversd number is %d \n", reversed);
    if (realnumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{

    int number;
    printf(" enter the number of for check pilndrom it is or not \n");
    scanf("%d", &number);
    if (plnd(number))
    {
        printf(" this is palindrom number \n");
    }
    else
    {
        printf(" this is  not a palindrom number\n ");
    }

    return 0;
}