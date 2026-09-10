// DOUBLY LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *next;
    int data;
    struct node *prev;
};

struct node *start = NULL;

void create_ll();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();

int main()
{
    int option;

    do {
        printf("\n\n------- Main Menu -------");
        printf("\n1. Create linked list");
        printf("\n2. Display linked list");
        printf("\n3. Insert a node in beginning");
        printf("\n4. Insert a node at end");
        printf("\n5. Insert a node before a given node");
        printf("\n6. Insert a node after a given node");
        printf("\n7. Delete a node from beginning");
        printf("\n8. Delete a node at end");
        printf("\n9. Delete a given node");
        printf("\n10. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                create_ll();
                break;

            case 2:
                display();
                break;

            case 3:
                insert_beg();
                break;

            case 4:
                insert_end();
                break;

            case 5:
                insert_before();
                break;

            case 6:
                insert_after();
                break;

            case 7:
                delete_beg();
                break;

            case 8:
                delete_end();
                break;

            case 9:
                delete_node();
                break;

            case 10:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(option != 10);

    return 0;
}


void create_ll()
{
    struct node *new_node, *ptr;
    int num;

    printf("\nEnter -1 to end");

    printf("\nEnter the data: ");
    scanf("%d", &num);

    while(num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        if(new_node == NULL)
        {
            printf("\nMemory allocation failed!");
            return;
        }

        new_node->data = num;
        new_node->next = NULL;
        new_node->prev = NULL;

        if(start == NULL)
        {
            start = new_node;
        }
        else
        {
            ptr = start;

            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            ptr->next = new_node;
            new_node->prev = ptr;
        }

        printf("Enter the data: ");
        scanf("%d", &num);
    }

    printf("\nLinked list created successfully!");
}


void display()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\nList is empty!");
        return;
    }

    ptr = start;

    printf("\nLinked List: ");

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}


void insert_beg()
{
    struct node *new_node;
    int num;

    printf("\nEnter the data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory allocation failed!");
        return;
    }

    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;

    if(start != NULL)
    {
        start->prev = new_node;
    }

    start = new_node;

    printf("\nNode inserted successfully!");
}


void insert_end()
{
    struct node *ptr, *new_node;
    int num;

    printf("\nEnter the data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory allocation failed!");
        return;
    }

    new_node->data = num;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(start == NULL)
    {
        start = new_node;
    }
    else
    {
        ptr = start;

        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = new_node;
        new_node->prev = ptr;
    }

    printf("\nNode inserted successfully!");
}


void insert_before()
{
    struct node *new_node, *ptr;
    int num, val;

    if(start == NULL)
    {
        printf("\nList is empty!");
        return;
    }

    printf("\nEnter the data: ");
    scanf("%d", &num);

    printf("\nEnter the value before which data has to be inserted: ");
    scanf("%d", &val);

    ptr = start;

    while(ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("\nValue not found!");
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory allocation failed!");
        return;
    }

    new_node->data = num;
    new_node->next = ptr;
    new_node->prev = ptr->prev;

    if(ptr->prev != NULL)
    {
        ptr->prev->next = new_node;
    }
    else
    {
        start = new_node;
    }

    ptr->prev = new_node;

    printf("\nNode inserted successfully!");
}


void insert_after()
{
    struct node *new_node, *ptr;
    int num, val;

    if(start == NULL)
    {
        printf("\nList is empty!");
        return;
    }

    printf("\nEnter the data: ");
    scanf("%d", &num);

    printf("\nEnter the value after which data has to be inserted: ");
    scanf("%d", &val);

    ptr = start;

    while(ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("\nValue not found!");
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory allocation failed!");
        return;
    }

    new_node->data = num;
    new_node->prev = ptr;
    new_node->next = ptr->next;

    if(ptr->next != NULL)
    {
        ptr->next->prev = new_node;
    }

    ptr->next = new_node;

    printf("\nNode inserted successfully!");
}


void delete_beg()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\nList is empty!");
        return;
    }

    ptr = start;
    start = start->next;

    if(start != NULL)
    {
        start->prev = NULL;
    }

    free(ptr);

    printf("\nNode deleted successfully!");
}


void delete_end()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\nList is empty!");
        return;
    }

    ptr = start;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    if(ptr->prev == NULL)
    {
        // Only one node
        start = NULL;
    }
    else
    {
        ptr->prev->next = NULL;
    }

    free(ptr);

    printf("\nNode deleted successfully!");
}


void delete_node()
{
    struct node *ptr;
    int val;

    if(start == NULL)
    {
        printf("\nList is empty!");
        return;
    }

    printf("\nEnter the value of the node which has to be deleted: ");
    scanf("%d", &val);

    ptr = start;

    while(ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("\nValue not found!");
        return;
    }

    // If deleting first node
    if(ptr->prev == NULL)
    {
        start = ptr->next;

        if(start != NULL)
        {
            start->prev = NULL;
        }
    }
    else
    {
        ptr->prev->next = ptr->next;

        if(ptr->next != NULL)
        {
            ptr->next->prev = ptr->prev;
        }
    }

    free(ptr);

    printf("\nNode deleted successfully!");
}
