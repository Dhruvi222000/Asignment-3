/*
 program-5 WAP to print factorial of given number.
*/

#include<stdio.h>
main()
{
         int num,factorial =1;
	     printf("\n\n\t  Enter a number : ");
         scanf("%d", &num);
    
         if(num< 0)
	 {
        printf("\n\n\t Factorial is not for negative numbers : ");
     } 
         else
	 {
         int i = 1;
         while(i<= num)
	 {
            factorial*= i;
            i++;
     }
        printf("\n\n\t  Factorial of %d  %d", num, factorial);
    }
    
}
