//enrollment number:92500527105
Create an array of size 10, find the largest value from the array.

#include <stdio.h>

int main()
{
    int arr[10];
    int i, largest;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("The largest value in the array is: %d\n", largest);

    return 0;
}
