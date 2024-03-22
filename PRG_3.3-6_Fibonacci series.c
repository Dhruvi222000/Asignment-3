/*
  program-6 WAP to print Fibonacci series up to given numbers
*/

#include<stdio.h>
main()
{
	int a=0,b=1,c,i,number;
	printf("\n\n\t Input a number to print the fibonacci series :");
	scanf("%d",&number);
	
	printf("\n\n\t  %d %d",a,b);
	i=2;
	while(i<=number)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		i=i+1;
	}
}
