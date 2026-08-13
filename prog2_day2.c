//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main()
{
    float r, area, circumference;

    printf("Enter radius for the circle: ");
    scanf("%f", &r);

    area = 3.14f * r * r;
    circumference = 2.0f * 3.14f * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}