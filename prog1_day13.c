//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{   
   int a,b,op;
   
   printf("enter two numbers and the operator\n");
   scanf("%d%d%d",&a,&b,&op);
    switch ((int)op) 
   {	
        case 1:
	            printf("%d\n",a+b);
		        break;
        
        case 2:
                printf("%d\n",a-b);
                break;
        		
		case 3:
                 printf("%d\n",a*b);
		         break;		 
				
		case 4:
             if (b==0)
			 {
                printf("Error division by zero\n");	
			 }	
            else 
			{	
			 printf("%d\n",a/b);
			}
		    break;		 
				
		case 5:	
		    if (b==0)
			 {
                printf("Error division by zero\n");	
			 }	
            else 
			{	
				printf("%d\n",a%b);
			}	
		    break;
    		
		default:	
		        printf("invalid operator\n");
	}
    return 0;
}	