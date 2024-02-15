// Write a program to display no. of characters, words, newlines and vowels in a file
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char ch;
    int characterCount = 0, wordCount = 0, newlineCount = 0, vowelCount = 0;

    file = fopen("source.txt", "r");

    while ((ch = fgetc(file)) != EOF)
    {
        characterCount++;

        if (ch == '\n')
        {
            newlineCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            wordCount++;
        }

        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
        {
            vowelCount++;
        }
    }

    printf("Character Count: %d\n", characterCount);
    printf("Word Count: %d\n", wordCount);
    printf("Newline Count: %d\n", newlineCount);
    printf("Vowel Count: %d\n", vowelCount);

    fclose(file);

    return 0;
}
/*In this program, we open the file in read mode (r). We declare variables to store the counts of characters, words, newlines, and vowels.

We use a while loop to read each character from the file using the fgetc() function. We increment the characterCount variable each time.

We check if the current character is a newline character ('\n'). If it is, we increment the newlineCount variable.

We check if the current character is a space, newline, or tab character. If it is, we increment the wordCount variable.

We convert the current character to lowercase using the tolower() function. Then, we check if it is a vowel. If it is, we increment the vowelCount variable.

Finally, we print the counts of characters, words, newlines, and vowels. The program then closes the file using the fclose() function.*/