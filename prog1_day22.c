//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main()
{
    int n, t, digit, i, f, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = n;

    while (t != 0)
    {
        digit = t % 10;

        f = 1;

        for (i = 1; i <= digit; i++)
        {
            f = f * i;
        }

        sum = sum + f;

        t = t / 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}