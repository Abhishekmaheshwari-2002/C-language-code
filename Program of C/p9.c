// Q9. Write a program for stack representation using a linked list. Implement the stack
// operations.
#include <stdio.h>
#include <stdlib.h>

struct StackNode
{
    int data;
    struct StackNode *next;
};

struct StackNode *newNode(int data)
{
    struct StackNode *stackNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(struct StackNode *root)
{
    return root;
}

void push(struct StackNode **root, int data)
{
    struct StackNode *stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}

int pop(struct StackNode **root)
{
    if (isEmpty(*root))
    {
        printf("Stack is empty\n");
        return -1;
    }
    struct StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    printf("%d popped from stack\n", popped);
    return popped;
}

int peek(struct StackNode *root)
{
    if (isEmpty(root))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return root->data;
}

int main()
{
    struct StackNode *root = NULL;
    push(&root, 1);
    push(&root, 2);
    push(&root, 3);
    printf("%d peeked from stack\n", peek(root));
    pop(&root);
    return 0;
} 