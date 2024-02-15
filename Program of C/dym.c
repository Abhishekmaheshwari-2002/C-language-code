#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    int *emp;
    int a, b;

    for (int i = 1; i < 4; i++)
    {
        printf(" enter the value of length of emp id \n");
        scanf("%d", &n);
        printf("Enter the value of a\n");
        scanf("%d", &a);
        getchar();

        printf("Enter the value of b\n");
        scanf("%d", &b);
        getchar();
        emp = (int *)malloc(n * sizeof(int));
        printf("employee no  : %d\n", i);
        printf("enter the emp id of the emp no %d\n", i);
        scanf("%d", emp);
        printf(" your  employee id is %d\n", *emp);
        free(emp);
    }

    return 0;
}