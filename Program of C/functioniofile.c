#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("my.txt", "w");
    char str[100];
    //fgets(string, 34, ptr);
    //char c = fgetc(ptr);
    // printf(" the content of this file is : %s\n  ", string);
    //printf(" the letter  of this file is : %c\n  ", c);
    //  fputc('a', ptr);
    fputs(" hello how are you bro ", ptr);
    // flose(ptr);

    return 0;
}
