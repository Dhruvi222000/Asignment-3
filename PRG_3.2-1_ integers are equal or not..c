//               Conditional Logic Programs:         //

/*
   program-1 Write a C program to accept two integers and check whether they are equal or not.
*/


#include<stdio.h>
main()
{
        int num1,num2;
         
       printf("\n\n\t  Enter first integer: ");
       scanf("%d", &num1);
    
       printf("\n\n\t  Enter second integer: ");
       scanf("%d", &num2);

   
       if (num1 == num2)
    {
		    printf("\n\n\t enter  the two integers are equal :");
    } 
	   else 
	{
	        printf("\n\n\t enter  the two integers are not equal :");
    }
}
