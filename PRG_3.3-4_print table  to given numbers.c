/*
  program-4 WAP to print table up to given numbers.
*/

#include<stdio.h>
main()
{
	int n,number;
	printf("\n\n\t input a number to print the table :");
	scanf("%d",&number);
	
	n=1;
	while(n<=10)
	{
		printf("\n\t %d * %d = %d ",number,n,number*n);
		n=n+1;
	}
}
