//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift larger elements to the right
    for (i = n - 1; i >= 0 && arr[i] > element; i--)
    {
        arr[i + 1] = arr[i];
    }

    // Insert the element
    arr[i + 1] = element;

    n++;

    // Print updated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}