/*
 program-34 Accept month number and display month name.
*/

#include<stdio.h>
main()
{
	int Month;
	printf("\n\n\t  enter the number of month (1-12) :");
	scanf("%d",&Month);
	
    	if(Month == 1 )
	{
	    	printf("\n\n\t  January :");
	}
	   else if (Month == 2 )
	{
		    printf("\n\n\t  February :");
	}
	  else if (Month == 3 )
	{
		    printf("\n\n\t  March :");
	}
	  else if (Month == 4 )
	{
		    printf("\n\n\t  April :");
	}
	  else if (Month == 5 )
	{
		    printf("\n\n\t  May :");
	}
	  else if (Month == 6 )
	{
		    printf("\n\n\t  June :");
	}
	 else if (Month == 7 )
	{
		    printf("\n\n\t  July :");
	}
	 else if (Month == 8 )
	{
		    printf("\n\n\t  Augustg :");
	}
	 else if (Month == 9 )
	{
		    printf("\n\n\t  September :");
	}
	 else if (Month == 10)
	{
		    printf("\n\n\t  October :");
	}
	 else if (Month == 11 )
	{
		    printf("\n\n\t  November :");
	}
	 else if (Month == 12 )
	{
		    printf("\n\n\t  December :");
	}
      else
    {
    	  printf("\n\n\t   invalid input the enter month number between (1-12) :");
	}
	
}

