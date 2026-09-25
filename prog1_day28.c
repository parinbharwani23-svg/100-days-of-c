//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main()
{
    int n, num, i, prime;

    printf("Enter n: ");
    scanf("%d", &n);

    for (num = 2; num <= n; num++)
    {
        prime = 1;

        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d ", num);
        }
    }

    return 0;
}