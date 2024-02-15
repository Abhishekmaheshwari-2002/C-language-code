#include <stdio.h>
int grn(int n)
{

    srand(time(NULL));
    return rand() % n;
}

int main()

{
    int ip;
    int ps1;
    int cs1;

    char playerchar;
    char compchar;
    char rps[] = {'R', 'P', 'S'};

    printf(" welcome to the gamwe\n");
    printf(" Rule of this game:\n \n");
    printf(" if you choose rock press 1,");
    printf(" if you choose pepper  press 2,");
    printf(" if you choose sessior press 3 .\n");

    for (int i = 0; i < 3; i++)
    {
        // printf(" first round \n");
        printf(" player no  : 1 \n");
        printf(" its your turn \n");
        printf(" enter player input\n ");
        scanf("%d", &ip);
        playerchar = rps[ip - 1];
        printf(" your input is %c \n ", playerchar);

        printf(" player no  : 2 \n");
        printf(" its computer turn\n ");
        printf(" computer input \n");
        compchar = rps[grn(3)];
        printf(" computer input is %c\n \n\n", compchar);
        printf(" your input %c\n computer input %c\n", playerchar, compchar);

        if (playerchar == compchar)
        {
            printf(" its a draw \n");
        }
        else if (playerchar = 'r', compchar = 'p')
        {
            printf(" computer win\n ");
        }
        else if (playerchar = 'r', compchar = 's')
        {
            printf("  you win \n");
        }
        else if (playerchar = 'p', compchar = 'r')
        {
            printf("  you win\n");
        }
        else if (playerchar == compchar)
        {
            printf("  its a draw\n");
        }
        else if (playerchar = 'p', compchar = 's')
        {
            printf(" computer win\n");
        }
        else if (playerchar = 's', compchar = 'r')
        {
            printf(" computer win\n");
        }
        else if (playerchar = 's', compchar = 'p')
        {
            printf("  you win \n");
        }
        else if (playerchar == compchar)
        {
            printf(" its a draw\n");
        }

        printf(" second round\n\n");
    }

    return 0;
}