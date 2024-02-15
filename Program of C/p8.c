// Write a menu driven program to perform various operations on circular linked list.
#include <stdio.h>
#include <stdlib.h>

// Structure of a Node in the circular linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function to create a new Node in the circular linked list
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = newNode; // The next of new node is itself (to indicate circular nature)
    return newNode;
}

// Function to add a new Node at the end of the circular linked list
void insertNode(Node **head, int data)
{
    Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != *head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}

// Function to delete a Node with the specified data from the circular linked list
void deleteNode(Node **head, int data)
{
    if (*head == NULL)
    {
        printf("No element in the list\n");
        return;
    }
    Node *temp = *head;
    if (temp->data == data)
    {
        while (temp->next != *head)
        {
            temp = temp->next;
        }
        temp->next = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    Node *prev = *head;
    while (temp->next != *head)
    {
        if (temp->data == data)
        {
            prev->next = temp->next;
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    if (temp->data == data)
    {
        prev->next = temp->next;
        free(temp);
    }
}

// Function to print the circular linked list
void printList(Node *head)
{
    if (head == NULL)
    {
        printf("No elements in the list\n");
        return;
    }
    Node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main()
{
    Node *head = NULL;
    int choice, data;
    do
    {
        printf("\nMenu: \n");
        printf("1. Insert Node\n");
        printf("2. Delete Node\n");
        printf("3. Print List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertNode(&head, data);
            break;
        case 2:
            printf("Enter data to delete: ");
            scanf("%d", &data);
            deleteNode(&head, data);
            break;
        case 3:
            printList(head);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}