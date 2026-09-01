//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() 

{

    int n, rem, b = 0, a = 1;
    printf("enter the number:\n");
    scanf("%d", &n);

    while (n > 0) 
	{
        rem = n % 2;
        b = b + (rem * a);
        a = a * 10;
        n = n / 2;
    }

    printf("%d", b);

    return 0;
}