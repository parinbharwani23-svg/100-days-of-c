//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
 #include<stdio.h>
 int main()
{
    float C,F;
    printf("Enter temperature in degree celcius:\n");
    scanf("%f",&C);
    
    F=(C*1.8f)+32;

    printf("F=%.2f",F);
	return 0;
 }	