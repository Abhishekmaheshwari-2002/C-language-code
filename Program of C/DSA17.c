// Write a program to copy contents of one file to another file.Display contents of
//     the file after copy
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *File1, *File2;
    char ch;

    File1 = fopen("source.txt", "r");
    File2 = fopen("destination.txt", "w");
  
    while ((ch = fgetc(File1)) != EOF)
    {
        fputc(ch, File2);
    }

    printf("File copied successfully.\n");

    fclose(File1);
    fclose(File2);

    return 0;
}
/*
In this program, we have a FILE pointer for both the source file and the destination file. We open both files in read mode (r) and write mode (w), respectively.

The program then enters a while loop, where it reads each character from the source file using the fgetc() function and stores it in the variable ch. The loop continues until the end of the file is reached, indicated by the EOF character.

Inside the loop, the character ch is written to the destination file using the fputc() function.

Finally, the program closes both files using the fclose() function and prints a success message.*/