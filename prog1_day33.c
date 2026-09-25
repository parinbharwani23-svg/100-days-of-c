//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, search;
    int low, high, mid;
    int pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    // Binary search
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            pos = mid;
            break;
        }
        else if (search > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (pos == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", pos);
    }

    return 0;
}