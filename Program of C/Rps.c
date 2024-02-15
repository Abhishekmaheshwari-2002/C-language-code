#include <stdio.h>

int grn(int n)
{
  srand(time(NULL));
    return rand() % n;
}

int main()
{
    printf(" %d", grn(10));    
    return 0;
}
 
    