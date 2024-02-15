// Write a program to perform insert and delete operations on singly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(struct Node **head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    struct Node *head = NULL;

    insert(&head, 7);
    insert(&head, 1);
    printList(head);
    printf("\n");

    deleteNode(&head, 1);
    printList(head);

    return 0;
}
/*
In this program, we define a struct Node to represent a node in the linked list. The insert function takes the address of the head pointer and the data to be inserted as parameters. It allocates memory for a new node and makes it point to the current head node. Finally, it updates the head pointer to point to the new node.

The deleteNode function also takes the address of the head pointer and the key to be deleted as parameters. It traverses the list to find the key and if it exists, it updates the next pointer of the previous node to the next node of the node to be deleted. Finally, it frees the memory occupied by the deleted node.

The printList function prints the linked list by following the next pointers from the head node.

The main function creates an empty linked list, performs insert and delete operations on it, and prints the linked list after each operation.



*/