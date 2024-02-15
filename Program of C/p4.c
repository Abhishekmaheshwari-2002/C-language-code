// Write a program to convert infix expressions to postfix expressions
#include <stdio.h>
#include <string.h>

int isOperand(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    return 0;
}

int getPriority(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

void infixToPostfix(char *infix)
{
    int i, j;
    char c, stack[20];
    i = j = 0;

    while (infix[i] != '\0')
    {
        c = infix[i++];
        if (isOperand(c))
        {
            stack[j++] = c;
            if (isOperator(c))
            {
                while (j > 0 && getPriority(stack[j - 1]) >= getPriority(c))
                {
                    infix[i - 1 + j--] = stack[--j];
                    stack[j++] = c;
                }
            }
            else if (c == '(')
            {
                stack[j++] = c;
            }
            else if (c == ')')
            {
                while (stack[j - 1] != '(')
                    infix[i - 1 + j--] = stack[--j];
                j--;
            }
        }
        while (j > 0)
        {
            infix[i - 1 + j--] = stack[j];
            infix[i + j] = '\0';
        }
    }
}

int main()
{
    char infix[20], postfix[20];
    printf("Enter infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix);
    printf("Postfix expression: %s\n", infix);
    return 0;
}