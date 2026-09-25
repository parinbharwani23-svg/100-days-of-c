//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main()
{
    int n, digit, rev = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
            rev = rev * 10 + 1;
        else
            rev = rev * 10 + 0;

        n = n / 10;
    }

    while (rev != 0)
    {
        digit = rev % 10;
        printf("%d", digit);
        rev = rev / 10;
    }

    return 0;
}