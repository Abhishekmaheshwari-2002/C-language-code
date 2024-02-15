#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}
//int areaofcircle(int x1, int y1, int x2, int y2, int (*distance)(int x1, int y1, int x2, int y2))
//{
//   return distance(x1, y1, x2, y2);
//}
int main()
{
    int x1, x2, y1, y2;
    int dst;
    int a;
    printf("enter the value of x1\n");
    scanf("%d", &x1);
    printf("enter the value of x2\n");
    scanf("%d", &x2);
    printf("enter the value of y1\n");
    scanf("%d", &y1);
    printf("enter the value of y2\n");
    scanf("%d", &y2);
    //   dst = areaofcircle(x1, x2, y1, y2, Edistance);
    dst = Edistance(x1, x2, y1, y2);
    // int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    //sqrt(a);
    printf(" The distance of these points :%d\n", dst);

    return 0;
}