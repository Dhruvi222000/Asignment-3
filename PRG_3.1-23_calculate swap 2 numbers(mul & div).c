/*
 program-23 .WAP to calculate swap 2 numbers with using of multiplication and division.
*/

#include<stdio.h>
main()
{
	int swapNumbers(int *a, int *b) 
	{
    *a = *a * *b;   
    *b = *a / *b;   
    *a = *a / *b;  
    }

           int num1, num2;
    
          printf("\n\n\t  Enter first number : ");
          scanf("%d", &num1);
          
          printf("\n\n\t  Enter second number : ");
          scanf("%d", &num2);
    
    
          printf("\n\n\t  numbers: num1 = %d, num2 = %d", num1, num2);
    
          swapNumbers(&num1, &num2);
    
    
          printf("\n\n\t  After swapping: num1 = %d, num2 = %d", num1, num2);
    


}
