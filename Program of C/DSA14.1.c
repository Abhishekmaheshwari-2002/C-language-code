// Write and explain code to insert element at the beginning of circular linked list
/*
To insert an element at the beginning of a circular linked list, you can follow these steps:

Create a new node with the given value.
If the list is empty, make the new node both the head and the tail.
If the list is not empty, adjust the head pointer and the tail's next pointer to point to the new node.*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (*head_ref == NULL)
    {
        new_node->next = new_node;
    }
    else
    {
        new_node->next = *head_ref;
    }

    *head_ref = new_node;
}

void printList(struct Node *node)
{
    struct Node *temp = node;
    if (node != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != node);
        printf("\n");
    }
}

int main()
{
    struct Node *head = NULL;

    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 6);

    printList(head);

    return 0;
}
/*In this code, we first define a Node structure that contains an integer value and a pointer to the next node. The insertAtBeginning function takes the address of the head pointer and the new value as arguments. Inside the function, we create a new node with the given value and allocate memory for it.

Then, we check if the list is empty. If it is, we set the new node as both the head and the tail by making its next pointer point to itself. Otherwise, we adjust the head pointer and the tail's next pointer to point to the new node.

Finally, we have a printList function that prints the elements of the circular linked list in a circular manner. The main function demonstrates the insertion operation by creating an empty circular linked list and inserting three elements at the beginning of the list.*/