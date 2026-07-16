enrollment number 92500527105
Insert an element into the array at user defined position.

#include <stdio.h>

int main()
 {
    int arr[100], n, i, pos, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    n++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)

    {
        printf("%d ", arr[i]);
    }

    return 0;
}
