/*
 program-7 WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
*/

#include<stdio.h>
main()
{
	  int number,reverse = 0,remainder;
      printf("\n\n\t  Enter a number : ");
      scanf("%d", &number);
    
       while(number!= 0)
   {
         remainder = number % 10;
         reverse = reverse * 10 + remainder;
         number /= 10;
   }
    
        printf("\n\n\t  Reverse number  %d :", reverse);
    
}

