/*
 program-16 Calcute the  sum of natural number using the  while loop.
*/

#include<stdio.h>
main()
{
	int n,sum=0,i=1;
	printf("\n\n\t Enter a positive integer :");
	scanf("%d",&n);
	
	 while(i<=n)
	{
		sum +=i;
		i++;
	}
	  printf("\n\n\t  Sum of first %d Natural numbers = %d",n,sum);
}
