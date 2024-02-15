// Write a program to perform push and pop operations on stack.
#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned int capacity;
    int *array;
};

struct Stack *createStack(unsigned int capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int item)
{
    if (isFull(stack))
    {
        printf("Stack is full\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("Pushed %d to stack\n", item);
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1;
    }
    int item = stack->array[stack->top--];
    printf("Popped %d from stack\n", item);
    return item;
}

int main()
{
    struct Stack *stack = createStack(5);
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
This program defines a struct called Stack to represent a stack data structure. Each stack has a top, a capacity, and an array to store the data items.

The createStack function is used to create a new stack. It takes the capacity of the stack as a parameter and initializes the top to -1, which represents an empty stack.

The isFull function checks if the stack is full.

The isEmpty function checks if the stack is empty.

The push function adds a new data item to the top of the stack.

The pop function removes the top data item from the stack and returns it.

In the main function, a new stack is created with a capacity of 5. The push function is then used to add data items to the stack. Finally, the pop function is used to remove data items from the stack.



*/
