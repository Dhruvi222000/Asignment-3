/*
  program-19 .Patterns
  (number-1)
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>
main()
{
		int i,j;
	    i=1;
	    while(i<=5)
	{
		  j=1;
		  while(j<=i)
    {
    	    if(j%2!=0)
		  		printf(" 1 ");
		  	else
		  		printf(" 0 ");
		  	
		  	
		  	j=j+1;
    }
		  printf("\n");
		  i=i+1;
	}
}
