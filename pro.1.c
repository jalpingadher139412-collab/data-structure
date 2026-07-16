Enrollment number: 92500527105
 Create an array of size 10, input values and print the array, and
search an element in the array. generate code.


#include <stdio.h>

int main()
{
    int arr[10];
    int i, search, found = 0;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

      printf("\nArray elements are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            printf("Element %d found at position %d.\n", search, i + 1);
            break;
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
