// Write a menu - driven program to perform push, pop, and view operations on the stack
#include <stdio.h>
#include <stdlib.h>

// structure to define the stack node
typedef struct StackNode
{
    int data;
    struct StackNode *next;
} StackNode;

// structure to define the stack
typedef struct Stack
{
    StackNode *top;
} Stack;

// function to create a new stack node
StackNode *newStackNode(int data)
{
    StackNode *newNode = (StackNode *)malloc(sizeof(StackNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// function to initialize the stack
Stack *createStack()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

// function to check if the stack is empty
int isEmpty(Stack *stack)
{
    return stack->top == NULL;
}

// function to push an element to the stack
void push(Stack *stack, int data)
{
    StackNode *newNode = newStackNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

// function to pop an element from the stack
int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1;
    }
    StackNode *temp = stack->top;
    int poppedData = temp->data;
    stack->top = temp->next;
    free(temp);
    return poppedData;
}

// function to view the top element of the stack
int peek(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->top->data;
}

int main()
{
    Stack *stack = createStack();
    int choice, data;

    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to push: ");
            scanf("%d", &data);
            push(stack, data);
            break;
        case 2:
            data = pop(stack);
            if (data != -1)
                printf("Popped data: %d\n", data);
            break;
        case 3:
            data = peek(stack);
            if (data != -1)
                printf("Top data: %d\n", data);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please enter a valid choice.\n");
        }
    }

    return 0;
}