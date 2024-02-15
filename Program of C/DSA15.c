//  Write a program for stack representation using linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return -1;
    }
    int data = top->data;
    struct Node *temp = top;
    top = top->next;
    free(temp);
    return data;
}

int peek()
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return -1;
    }
    return top->data;
}

int isEmpty()
{
    return top == NULL;
}

void main()
{
    push(1);
    push(2);
    push(3);
    printf("%d popped from stack.\n", pop());
    printf("Top element is %d.\n", peek());
    printf("Stack is %s.\n", isEmpty() ? "empty" : "not empty");
}
/*
In this program, we have a struct Node that represents each element in the stack. Each node contains an integer data and a pointer next to the next node in the stack.

The function push(int data) creates a new node and adds it to the top of the stack.

The function pop() removes the top node from the stack and returns its data.

The function peek() returns the data of the top node without removing it from the stack.

The function isEmpty() checks if the stack is empty.

The main() function demonstrates the usage of these functions by performing various operations on the stack, such as pushing elements onto the stack, popping elements from the stack, and checking the top element of the stack.*/