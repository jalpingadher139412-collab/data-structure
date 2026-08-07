//Enrolment No:-92500527105
// Write a program to find GCD of two numbers.


#include<stdio.h>


int stack[10];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    int a,b,temp;

    printf("Enter first Number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    push(a);
    push(b);

    b =pop();
    a =pop();

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    push(a);
    printf("\n GCD of number is : %d",pop());

}
