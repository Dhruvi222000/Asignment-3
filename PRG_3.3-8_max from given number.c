/*
 program-8 Write a program to find out the max from given number
            (E.g., No: -1562 Max number is 6).
*/

#include<stdio.h>
main()
{
	   int number, maxdigit= -1;
       printf("\n\n\t Enter a number: ");
       scanf("%d", &number);

    
         if (number < 0)
   {
         number *=- -1;
   }

   
        while (number > 0)
   {
        int digit = number % 10;
        if (digit > maxdigit)
    {

            maxdigit = digit;
    }
            number /= 10;
    }

   
       printf("\n\n\t  Max number is %d :", maxdigit);

}


