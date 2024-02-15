// Write a program to perform push and pop operations on stack using linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Stack
{
    struct Node *top;
};

struct Stack *createStack()
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == NULL;
}

void push(struct Stack *stack, int item)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = item;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Pushed %d to stack\n", item);
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1;
    }
    int item = stack->top->data;
    struct Node *temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    printf("Popped %d from stack\n", item);
    return item;
}

int main()
{
    struct Stack *stack = createStack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);
    pop(stack);
    pop(stack);
    return 0;
}

/*
This program uses a linked list to implement a stack data structure. Each node in the linked list represents a data item in the stack.

The createStack function is used to create a new stack. It initializes the top of the stack to NULL, which represents an empty stack.

The isEmpty function checks if the stack is empty.

The push function adds a new data item to the top of the stack by creating a new node and making its next pointer point to the current top of the stack.

The pop function removes the top data item from the stack by changing the top of the stack to the next node and freeing the memory of the removed node.

In the main function, a new stack is created using the createStack function. The push function is then used to add data items to the stack. Finally, the pop function is used to remove data items from the stack.*/