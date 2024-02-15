#include <stdio.h>
#include <string.h>
typedef struct children
{
    int id;
    char favletter;
    char name[86];
    int marks;
} stc;
int main()

{
    stc rahul = {12, 'r', "rahul", 45};
    stc mohan = {10, 'm', "mohan", 46};

    printf(" the id no.  of rahul %d \n favrouit lettter is %c \n name is %s \n marks isn %d \n", rahul.id, rahul.favletter, rahul.name, rahul.marks);
    printf(" the id no.  of mohan %d \n favrouit lettter is %c \n name is %s \n marks isn %d \n", mohan.id, mohan.favletter, mohan.name, mohan.marks);

    return 0;
}
