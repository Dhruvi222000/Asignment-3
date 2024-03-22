/*
program-15 store 5 number in array and short it inascending order...
*/

#include<stdio.h>
main()
{
	int arr[5];
	int i,j,temp;
	
	printf("\n\n\t Enter 5 numbers :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("\n\n\t Strted array in Ascending order :");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t %d",arr[i]);
	}
}
