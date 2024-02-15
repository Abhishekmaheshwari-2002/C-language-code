#include <stdio.h>
#include <string.h>
struct travelagncy
{
    char name[54];
    int drvl;
    char route[53];
    int kms;
};

int main()
{
    struct travelagncy d1, d2, d3;
    printf(" enter the some details to all the drivers\n");

    for (int i = 1; i < 4; i++)
    {
        printf("enter the  details of driver no %d \n", i);
        
        printf("enter the  name  of driver no\n ");
        scanf("%s", &d1.name);
        
        printf("enter the  drvl of driver no\n");
        scanf("%d", &d1.drvl);
        
        printf("enter the  route  of driver no \n");
        scanf("%s", &d1.route);
        
        printf("enter the  kms  of driver no \n");
        scanf("%d", &d1.kms);

        printf("enter the  details of driver no %d \n", i);
        
        printf("enter the  name  of driver no\n ");
        scanf("%s", &d2.name);
        
        printf("enter the  drvl of driver no\n");
        scanf("%d", &d2.drvl);
        
        printf("enter the  route  of driver no \n");
        scanf("%s", &d2.route);

        printf("enter the  kms  of driver no \n");
        scanf("%d", &d2.kms);
        
        printf("enter the  details of driver no %d \n", i);
        
        printf("enter the  name  of driver no\n ");
        scanf("%s", &d3.name);

        printf("enter the  drvl of driver no\n");
        scanf("%d", &d3.drvl);

        printf("enter the  route  of driver no \n");
        scanf("%s", &d3.route);

        printf("enter the  kms  of driver no \n");
        scanf("%d", &d3.kms);
    }

    return 0;
}