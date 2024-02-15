#include <stdio.h>
int main()
{
    char vowel;
    char consonant;
    printf(" enter the value of any letter to check\n\n ");
    scanf("%c", &vowel);
    switch (vowel)
    {
    case 'a':
        printf("your letter is vowel \n");
        break;
    case 'e':
        printf("your letter is vowel \n");
        break;
    case 'i':
        printf("your letter is vowel \n");
        break;
    case 'o':
        printf("your letter is vowel \n");
        break;
    case 'u':
        printf("your letter is vowel \n");
        break;

    default:
        printf(" your letter is consonant");
        break;
    }

    return 0;
}