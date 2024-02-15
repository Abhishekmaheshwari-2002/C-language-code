#include <stdio.h>
int main()
{
    int a[4][3];
    int b[3][2];
    int result[4][2];
    int m, n, sum = 0;
    printf("                                  This program is for martrix multipliaxtion\n");
    printf(" enter the first matrix \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           // printf("%d%d",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf(" enter the second matrix \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf(" your result here \n\n ");
    //getchar();
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k]*b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }

    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
                
        }

        printf("\n");
    }



    return 0;
}