/*
 program-23 c program to Reverse a number using for loop.
*/

#include<stdio.h>
main()
{
	int number,reversednumber=0,remainder;
	printf("\n\n\t  Enter the integer :");
	scanf("%d",&number);
	
	for(number!=0;number/=10;)
	{
		remainder=number%10;
		reversednumber=reversednumber*10+remainder;
	}
	
	printf("\n\n\t Reversed number :%d",reversednumber);
}
