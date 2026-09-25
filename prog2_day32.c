//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int max = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Count frequency of each digit
    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum frequency
    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}