#include <stdio.h>
int main()
{
    int s;
    int n;
    int type;
    printf(" which type pf pattern of do you want\n ");
    printf(" press 1 for star pattern\n");
    printf(" press 2 for number pattern\n");
    scanf(" %d", &type);

    switch (type)
    {
    case 1:

        printf(" enter the number of  for pattern star\n ");
        scanf(" %d", &s);
        for (int i = 0; i < s; i++)
        {
            for (int j = 0; j < s; j++)
            {
                if (j <= i)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            printf(" \n");
        }
        break;
    case 2:

        printf(" enter the number of  for pattern number\n ");
        scanf(" %d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j <= i)
                {
                    printf(" %d ", n);
                }
                else
                {
                    printf("   ");
                }
            }
            printf(" \n");
        }

    }

    return 0;
}