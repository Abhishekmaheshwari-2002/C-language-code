// Write a program to perform insert and delete operations on simple queue /
//     circular queue using linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;
int n;

void enqueue(int element)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = element;
    temp->next = NULL;

    if (rear == NULL)
    {
        front = rear = temp;
        front->next = front;
        rear->next = rear;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = front;
    }
    printf("Inserted %d to queue\n", element);
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    struct Node *temp = front;
    printf("Removed %d from queue\n", temp->data);

    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
        free(temp);
    }
}

int main()
{
    n = 100;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    dequeue();
    dequeue();

    enqueue(50);
    enqueue(60);

    return 0;
}
/*
This program performs insert and delete operations on a circular queue using a linked list. It uses a structure called Node to represent each element of the queue. The front and rear pointers are used to keep track of the front and rear elements of the queue. The size of the queue is given by the variable n.

The enqueue function is used to insert an element at the rear of the queue. Before inserting an element, it creates a new node and stores the element in it. If the queue is empty, it sets the front and rear pointers to the new node. If the queue is not empty, it adds the new node to the end of the queue and updates the rear pointer.

The dequeue function is used to remove an element from the front of the queue. Before removing an element, it checks if the queue is empty by comparing the front pointer with NULL. If the queue is empty, it prints a message and returns without removing the element. If the queue is not empty, it removes the front node from the queue, updates the front pointer, and frees the memory occupied by the removed node. If the front pointer becomes equal to the rear pointer after removing the element, it means that the queue is empty now. So, it sets the front and rear pointers to NULL.

In the main function, some sample insert and delete operations are performed on the queue. The resulting state of the queue is printed to the console.*/