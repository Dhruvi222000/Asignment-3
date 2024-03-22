/*
 program-14 .WAP to find the largest of three numbers.
*/

#include<stdio.h>
main()
{
	   float num1, num2, num3;

       printf("\n\n\t enter three numbers: ");
       scanf("%f %f %f", &num1, &num2, &num3);

      if (num1 >= num2 && num1 >= num3)
      
         printf("\n\n\t  %.2f is the largest number.", num1);
        
    else if (num2 >= num1 && num2 >= num3)
    
         printf("\n\n\t  %.2f is the largest number.", num2);
        
    else
         printf("\n\n\t  %.2f is the largest number.", num3);

}
