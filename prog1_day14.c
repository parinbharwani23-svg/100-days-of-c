//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main()
{
    int a, b;
    int n = 0;

    printf("Enter range\n");
    scanf("%d%d", &a, &b);

    while (a <= b)
    {
        n = n + a;
        a++;
    }

    printf("n = %d", n);

    return 0;
}