// Write a program for queue representation using linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return -1;
    }

    int data = front->data;
    struct Node *temp = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    free(temp);
    return data;
}

int isEmpty()
{
    return front == NULL;
}

void main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("%d dequeued from queue.\n", dequeue());
    printf("Queue is %s.\n", isEmpty() ? "empty" : "not empty");
}
/*
In this program, we have a struct Node that represents each element in the queue. Each node contains an integer data and a pointer next to the next node in the queue.

The front and rear pointers represent the front and rear of the queue, respectively. The front pointer points to the first node in the queue, and the rear pointer points to the last node in the queue.

The function enqueue(int data) creates a new node and adds it to the rear of the queue.

The function dequeue() removes the front node from the queue and returns its data.

The function isEmpty() checks if the queue is empty.

The main() function demonstrates the usage of these functions by performing various operations on the queue, such as enqueuing elements into the queue, dequeuing elements from the queue, and checking if the queue is empty.*/