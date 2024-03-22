/*
program-4 WAP to find factorial using recursion.
*/

#include<stdio.h>
main()
{
   	     int factorial(int n)
	 {
        if (n == 0) 
        return 1;
   
    else
        return n * factorial(n - 1);
}
    int num;
       printf("\n\n\t  Enter a non-negative integer: ");
       scanf("%d", &num);

    
    if (num < 0)
        printf("\n\n\t  Factorial is not defined for negative numbers.");
    else
        printf("\n\n\t  Factorial of %d is %d ", num, factorial(num));


	
		
	
 } 
