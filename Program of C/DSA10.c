// Write a program to convert infix expression to postfix expression
#include <stdio.h>
#include <string.h>

int isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return 1;
    return 0;
}

int getPrecedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    }
    return 0;
}

void infixToPostfix(char *expression)
{
    int i, j;
    char c;
    char stack[strlen(expression)];
    char *postfix = (char *)malloc(strlen(expression) * sizeof(char));
    strcpy(postfix, "");

    for (i = 0, j = -1; i < strlen(expression); i++)
    {
        c = expression[i];

        if (isalpha(c))
            postfix[++j] = c;

        else if (c == '(')
            stack[++j] = c;

        else if (c == ')')
        {
            while (stack[j] != '(')
                postfix[++j] = stack[j--];
            j--;
        }

        else
        {
            while (j >= 0 && isOperator(stack[j]) && getPrecedence(c) <= getPrecedence(stack[j]))
                postfix[++j] = stack[j--];

            stack[++j] = c;
        }
    }

    while (j >= 0)
        postfix[++j] = stack[j--];

    printf("Postfix: %s\n", postfix);
}

int main()
{
    char expression[] = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(expression);
    return 0;
}

/*This program converts an infix expression to a postfix expression. It uses two functions, isOperator and getPrecedence, to check if a character is an operator and to determine the precedence of an operator.

The infixToPostfix function takes a string containing the infix expression as input. It iterates through each character in the expression and processes it accordingly. If the character is an alphabet, it is added to the output string. If the character is an opening parenthesis, it is pushed onto the stack. If the character is a closing parenthesis, all operators within the parenthesis are popped from the stack and added to the output string. If the character is an operator, it is pushed onto the stack only if the stack is not empty and the top element of stack is an operator that has equal or higher precedence than the current operator.

After all characters in the expression have been processed, the remaining operators in the stack are popped and added to the output string. The resulting postfix expression is printed to the console.

In the main function, a sample infix expression is given as input to the infixToPostfix function. The resulting postfix expression is printed to the console.



*/