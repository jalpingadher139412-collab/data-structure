enrollment number 92500527105
Create an array of size 10, input values and display sum and average
of all elements in the array.

#include <stdio.h>

int main()
{
    int arr[10];
    int i, sum = 0;
    float average;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / 10;

    printf("\nSum of all elements = %d\n", sum);
    printf("Average of all elements = %.2f\n", average);

    return 0;
}
