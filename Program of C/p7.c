// Write a menu driven program using C language to perform following operations on
// Linked List :
// a) Create
// b) Insert at Beginning
// c) Insert after Specified Position
// d) Insert at the End
// e) Delete from Beginning
// f) Delete from Specified Position
// g) Delete from End
// h) Search Element
// i) Display List
// j) Count
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // Head of the linked list

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to display the linked list
void displayList()
{
    struct Node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("List: ");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Function to count the number of nodes in the list
int countNodes()
{
    struct Node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

// Function to search for an element
int searchElement(int element)
{
    struct Node *ptr = head;
    int position = 1;
    while (ptr != NULL)
    {
        if (ptr->data == element)
        {
            return position;
        }
        position++;
        ptr = ptr->next;
    }
    return -1;
}

// Function to insert a node at the beginning
void insertAtBeginning(int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node after specified position
void insertAtPosition(int data, int position)
{
    struct Node *newNode = createNode(data);
    struct Node *ptr = head;
    if (position == 1)
    {
        insertAtBeginning(data);
        return;
    }
    int i = 1;
    while (ptr != NULL && i < position - 1)
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr == NULL)
    {
        printf("Invalid position!\n");
        return;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
}

// Function to insert a node at the end
void insertAtEnd(int data)
{
    struct Node *newNode = createNode(data);
    struct Node *ptr = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
}

// Function to delete a node from the beginning
void deleteFromBeginning()
{
    struct Node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    head = head->next;
    free(ptr);
}

// Function to delete a node from specified position
void deleteFromPosition(int position)
{
    struct Node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    if (position == 1)
    {
        deleteFromBeginning();
        return;
    }
    int i = 1;
    while (ptr != NULL && i < position - 1)
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr == NULL || ptr->next == NULL)
    {
        printf("Invalid position!\n");
        return;
    }
    struct Node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}

// Function to delete a node from the end
void deleteFromEnd()
{
    struct Node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    if (head->next == NULL)
    {
        head = NULL;
        return;
    }
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}
     