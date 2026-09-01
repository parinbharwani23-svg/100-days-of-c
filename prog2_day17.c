//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main()
{
    int a, p = 1;
    int n = 2;

    printf("Enter a no.:\n");
    scanf("%d", &a);

    while (n < a)
    {
        if (a % n == 0)
        {
            p = 0;
            break;
        }

        n++;
    }

    if (p == 1 && a > 1)
        printf("%d is a prime number", a);
    else
        printf("%d is not a prime number", a);

    return 0;
}