#include <stdio.h>
int main()
{
    int table;
    printf("table  2 for press 2\n");
    printf("table 3 for press 3 \n");
    printf("table 4 for press 4 \n");
    printf("table 5 for press 5\n");
    printf("table 6 for press 6 \n");

    scanf("%d", &table);
    switch (table)
    {
    case 2:
        for (int i = 2; i <= 20; i = i + 2)

        {
            printf("the table of 2 is : %d = %d \n", table, i);
        }
        break;
    case 3:
        for (int j = 3; j <= 30; j = j + 3)

        {
            printf("the tabele of 3 is %d \n", j);
        }

        break;

    case 5:
        for (int l = 5; l <= 50; l = l + 5)

        {
            printf("the tabele of 5 is %d \n", l);
        }
        break;

    case 6:
        for (int m = 6; m <= 60; m = m + 6)

        {
            printf("the tabele of 6 is %d \n", m);
        }

        break;

    default:
        printf(" wrong input");

        break;
    }
    return 0;
}
