/*
program-17 calculte 5 numbers from user and calculte numbers of even and odd  using of while loop.
*/

#include<stdio.h>
main()
{
	int num,even_count=0,odd_count=0;
	int i=0;
	
	printf("\n\n\t Enter 5 numbers :");
	while(i<5)
	   {
	   	
	  
		scanf("%d",&num);
		if(num %2==0)
	{
		even_count++;
	}
	   else
	{
         odd_count++;	   	
    }
      i++;
    }

	 printf("\n\n\t Number of even numbers : %d",even_count);
	 printf("\n\n\t Number of odd numbers : %d",odd_count);
	 
	       	
		
}

