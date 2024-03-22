/*
program-16 Accept 5 numbers from user and perform sum of arry..
*/

#include<stdio.h>
main()
{
	int num[5],i;
	int sum=0;
	
	printf("\n\n\t  Enter 5 numbers :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("\n\n\t The sum of a numbers is %d :",sum);
}
