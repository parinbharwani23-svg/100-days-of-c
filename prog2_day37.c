
//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/#include <stdio.h>

int main()
{
    int arr[100][100];
    int trans[100][100];
    int rows, cols, i, j;

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

    // Find transpose
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    // Print transpose
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", trans[i][j]);
        }

        printf("\n");
    }

    return 0;
}