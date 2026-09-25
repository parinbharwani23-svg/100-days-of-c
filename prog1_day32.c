//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i;

    // Input first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Copy first array into third array
    for (i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }

    // Copy second array after first array
    for (i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }

    // Print merged array
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}