//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main()
{
    int arr[100][100];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Find sum
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}