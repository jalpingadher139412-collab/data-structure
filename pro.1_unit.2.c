//enrollment number 92500527105
//Implement stack using array with following operations: push, pop, peek, update, display, change, exit.


#include <stdio.h>

#define max 3

int stack[max], top = -1;

void push();
void pop();
void peek();
void update();
void display();

int main()
{
    int op;

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Update");
        printf("\n5. Display");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                update();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(op != 6);

    return 0;
}

void push()
{
    int value;

    printf("\nEnter value to be added: ");
    scanf("%d", &value);

    if(top == max - 1)
    {
        printf("\nStack Overflow!");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    int val;

    if(top == -1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        val = stack[top];
        top--;
        printf("\nDeleted value is: %d", val);
    }
}

void peek()
{
    if(top == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nTop element is: %d", stack[top]);
    }
}

void update()
{
    int i, x;

    printf("\nEnter position from top (1 for top): ");
    scanf("%d", &i);

    printf("\nEnter new value: ");
    scanf("%d", &x);

    if(i <= 0 || i > top + 1)
    {
        printf("\nInvalid position!");
    }
    else
    {
        stack[top - i + 1] = x;
        printf("\nValue updated successfully.");
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nStack elements are:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
