//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
 #include<stdio.h>
 int main()
{
  int M;
  printf("Enter marks aquired:\n");
  scanf("%d",&M);
  
  if (M>=90 && M<=100)
 {
  printf("grade A");
  }
  else if (M>=80 && M<=89)
  {
  printf("grade B");
  }
  else if (M>=70 && M<=79)
  {
  printf("grade C");
  }
  else if (M>=60 && M<=69)
  {
  printf("grade D");
  }
  else
  {
  printf("grade F");
  }
  return 0;
}