//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int arr[100][100];
    int rows, cols, i, j, d;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (d = 0; d < rows + cols - 1; d++)
    {
        if (d < cols - 1)
        {
            for (i = 0; i < rows; i++)
            {
                j = d - i;

                if (j >= 0 && j < cols)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
        else
        {
            for (i = rows - 1; i >= 0; i--)
            {
                j = d - i;

                if (j >= 0 && j < cols)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }

    return 0;
}