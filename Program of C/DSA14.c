// Write a menu driven program to perform various operations on circular linked
//     list
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
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = *head_ref;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        while (last->next != *head_ref)
            last = last->next;
        last->next = new_node;
    }
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

void printList(struct Node *node)
{
    struct Node *temp = node;

    if (node == NULL)
    {
        printf("The list is empty\n");
        return;
    }

    printf("The circular linked list is: \n");
    do
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    } while (temp != node);
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
*/