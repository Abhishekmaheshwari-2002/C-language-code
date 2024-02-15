// Write a program to perform insert and delete operations on simple queue /
//     circular queue
#include <stdio.h>

int queue[100], front = -1, rear = -1, n;

void enqueue(int element)
{
    if ((rear + 1) % n == front)
    {
        printf("Queue is full\n");
        return;
    }

    if (rear == -1)
        front = 0;

    rear = (rear + 1) % n;
    queue[rear] = element;
    printf("Inserted %d to queue\n", element);
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Removed %d from queue\n", queue[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
        return;
    }

    front = (front + 1) % n;
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
/*This program performs insert and delete operations on a circular queue. It uses an array called queue to store the elements of the queue. The front and rear variables are used to keep track of the front and rear elements of the queue. The size of the queue is given by the variable n.

The enqueue function is used to insert an element at the rear of the queue. Before inserting an element, it checks if the queue is full by comparing the next index of the rear with the front. If the queue is full, it prints a message and returns without inserting the element. If the queue is not full, it increments the rear index and adds the element to the queue.

The dequeue function is used to remove an element from the front of the queue. Before removing an element, it checks if the queue is empty by comparing the front with -1. If the queue is empty, it prints a message and returns without removing the element. If the queue is not empty, it removes the element from the front and increments the front index. If the front index becomes equal to the rear index after removing the element, it means that the queue is empty now. So, it sets the front and rear indexes to -1.

In the main function, some sample insert and delete operations are performed on the queue. The resulting state of the queue is printed to the console.*/