/*8Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/
/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{
    int i, j;

    // Upper half
    for (i = 1; i <= 7; i = i + 2)
    {
        // Print spaces
        for (j = 1; j <= (7 - i) / 2; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = 5; i >= 1; i = i - 2)
    {
        // Print spaces
        for (j = 1; j <= (7 - i) / 2; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}