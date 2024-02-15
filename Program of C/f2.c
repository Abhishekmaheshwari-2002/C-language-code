#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("my.txt", "r");
    char str[100];
    char c = fgetc(ptr);
    //fgets(string, 34, ptr);
    //fputc('a', ptr);
    //fputs(" hello how are you bro ", ptr);
    printf(" the content of this file is : %s\n  ", str);
    printf(" the letter  of this file is : %c\n  ", c);

    // flose(ptr);
    return 0;
}
