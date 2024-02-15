#include <stdio.h>

union student
{
    int id;
    char lettername;
    int marks;
};

int main()
{
    union student shubham = {12, 25, 's'};
    union student ravi = {14, 25, 'R'};
    union student rohan = {16, 32, 'r'};

    printf("the id no. of shubham id %d \n the marks of shubham is %d \n the first letter of name shubham is   %c\n \n ", shubham.id, shubham.marks, shubham.lettername);
    printf("the id no. of ravi id %d \n the marks of ravi is %d \n the first letter of name ravi is %c\n", ravi.id, ravi.marks, ravi.lettername);
    printf("the id no. of rohan id %d \n the marks of srohan is %d \n the first letter of name shrohanis %c\n", rohan.id, rohan.marks, rohan.lettername);
    return 0;
    }
