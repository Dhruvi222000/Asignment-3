/*
program-13 Wap to accept 5 numbers from user and check entered number is even or odd using of array..
*/

#include<stdio.h>
main()
{
	int numbers[5],i;
	printf("\n\n\t Enter 5 numbers :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&numbers[i]);
	}
	
	printf("\n\n\t Enter numbers and of a perity(0 for even,1 for odd):");
	for(i=0;i<5;i++)
	{
		if(numbers[i]%2==0)
		{
			printf("\n\n\t %d :(even)",numbers[i]);
		}
		else
		{
			printf("\n\n\t  %d :(odd)",numbers[i]);
		}
	}
}
