//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, middle, digits, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find the last digit
    last = n % 10;

    // Find the number of digits
    digits = (int)log10(n);

    // Find the first digit
    first = n / (int)pow(10, digits);

    // Remove first and last digit
    middle = n % (int)pow(10, digits);
    middle = middle / 10;

    // Swap first and last digit
    result = last * (int)pow(10, digits) + middle * 10 + first;

    printf("%d", result);

    return 0;
}