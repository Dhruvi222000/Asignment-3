/*
 program-31 .Accept 2 numbers and find out its sum check it size
*/
#include<stdio.h>
main()
{
      	int num1, num2, sum;

   
        printf("\n\n\t Enter first number : ");
        scanf("%d", &num1);
        
        printf("\n\n\t Enter second number: ");
        scanf("%d", &num2);

    
         sum = num1 + num2;

   
         if (sum > 32767 || sum < -32768)
	{
           printf("\n\n\t The sum is too large to fit into a signed 16-bit integer: ");
    } 
	    else
	{
	       printf("\n\n\t  The sum is: %d", sum);
           printf("\n\n\t  The size of the sum is: %lu bytes :", sizeof(sum));	
	}
	
        
}
