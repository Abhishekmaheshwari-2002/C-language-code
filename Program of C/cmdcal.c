#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int a, b;
    operation = argv[1];
    a = atoi(argv[2]);
    b = atoi(argv[3]);

    printf("operation is:  %s\n", operation);
    printf("a is:  %d\n", a);
    printf("b is:  %d\n", b);

    if (strcmp(operation, "add") == 0)
    {
        printf(" your result is %d \n", a + b);
    }
    else if (strcmp(operation, " sub") == 0)
    {
        printf(" your result is %d\n", a - b);
    }
    else if (strcmp(operation, " multi ") == 0)
    {
        printf(" your result is %d\n", a * b);
    }
    else if (strcmp(operation, " divide") == 0)
    {
        printf(" your result is %d\n", a / b);
    }

    return 0;
}
