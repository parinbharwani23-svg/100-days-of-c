//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find largest element
    largest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Find second largest
    second = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}