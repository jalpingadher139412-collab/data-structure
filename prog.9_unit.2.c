//Enrollment No:-92500527105
//Write a program which performs the following operations using a simple queue. : insert() -> delete() -> display()

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert();
void delete_element();
void display();

int main()
{
    int op;

    do
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                insert();
                break;

            case 2:
                delete_element();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid option");
        }

    } while(op != 4);

    return 0;
}

void insert()
{
    int num;

    printf("\nEnter number: ");
    scanf("%d", &num);

    if(rear == MAX - 1)
    {
        printf("\nQueue is overflow.");
        return;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }

    queue[rear] = num;
}

void delete_element()
{
    int val;

    if(front == -1 || front > rear)
    {
        printf("\nQueue is underflow.");
        return;
    }
    else
    {
        val = queue[front];
        printf("\nDeleted value is: %d", val);

        if(front == rear)
        {
            front = rear = -1;
            return;
        }

        front++;
    }
}

void display()
{
    int i;

    if(front == -1 || front > rear)
    {
        printf("\nQueue is empty.");
        return;
    }
    else
    {
        printf("\nQueue elements are: ");

        for(i = front; i <= rear; i++)
        {
            printf("\t%d", queue[i]);
        }
    }
}
