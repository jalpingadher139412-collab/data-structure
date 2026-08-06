//enrollment number 92500527105
// Write a program to find GCD of two numbers.

#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main()
{
    int a, b, temp;

    printf("Enter a number 1 : ");
    scanf("%d",&num1);

    printf("Enter a number 2 : ");
    scanf("%d",&num2);

    push(num1);
    push(num2);

    b = pop();
    a = pop();

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    push(a);

    printf("\n GCD = %d", pop());

    return 0;
}
