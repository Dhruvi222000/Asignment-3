/*
program-11 Wap to accept 5 numbers from user and dispaly in reverse order using for loop and array.
*/

#include<stdio.h>
main()
{
	int numbers[5],i;
	for( i=0;i<5;i++)
	{
		printf("\n\n\t Enter 5 numbers :",i+1);
		scanf("%d",&numbers[i]);
	}
	
	    printf("\n\n\t  Numbers in reverse order :");
	    for(i=4;i>=0;i--)
	    {
	    	printf("\n\n\t %d",numbers[i]);
		}
} 
