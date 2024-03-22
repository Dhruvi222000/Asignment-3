/*
 program-33- C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
*/

#include<stdio.h>
main()
{
    	int num;
    
     
       printf("\n\n\t Enter an integer: ");
       scanf("%d", &num);
    
    
      printf("\n\n\t First three powers of a %d :", num);
      
      printf("\n\n\t  %d^1 = %d", num, num);
      
      printf("\n\n\t  %d^2 = %d", num, num * num);
      
      printf("\n\n\t  %d^3 = %d", num, num * num * num);
    
}
