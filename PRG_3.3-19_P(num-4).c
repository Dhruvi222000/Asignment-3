//19.patterns..........

#include<stdio.h>
main()
{
	int row=5,i,j;
	
	for(i=1;i<row;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("*");
			
		}
		    printf("\n");
	}
	
	for(i=row-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			
		}
		    printf("\n");
    	}
}
