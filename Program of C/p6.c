// Write a menu - driven program using C language to perform the following operations on  circular Queue : insert, delete, and view in C language
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void enQueue(struct Node **front, struct Node **rear, int item);
int deQueue(struct Node **front, struct Node **rear);
void display(struct Node *front);

int main()
{
    struct Node *front = NULL;
    struct Node *rear = NULL;
    int choice, item;

    while (1)
    {
        printf("\n\n\n*****MAIN MENU*****\n");
        printf("1.Insert Element into Queue\n");
        printf("2.Delete Element from Queue\n");
        printf("3.Display the Queue\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter value to be inserted : ");
            scanf("%d", &item);
            enQueue(&front, &rear, item);
            break;

        case 2:
            item = deQueue(&front, &rear);
            printf("\nDeleted value is : %d\n", item);
            break;

        case 3:
            display(front);
            break;

        case 4:
            exit(1);

        default:
            printf("\nInvalid choice\n");
        }
    }
    return 0;
}

void enQueue(struct Node **front, struct Node **rear, int item)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = item;
    newNode->next = *front;

    if (*rear == NULL)
    {
        *rear = newNode;

        *front = newNode;
    }
}

int deQueue(struct Node **front, struct Node **rear)
{
    int item;
    struct Node *temp;

    if (*front == NULL)
    {
        printf("\nQueue is empty\n");
        return -1;
    }

    temp = *front;
    item = temp->data;
    *front = temp->next;

    if (*front == NULL)
        *rear = NULL;

    free(temp);
    return item;
}

void display(struct Node *front)
{
    struct Node *temp;

    if (front == NULL)
    {
        printf("\nQueue is empty\n");
        return;
    }

    temp = front;
    printf("\nElements in Circular Queue are :\n");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}