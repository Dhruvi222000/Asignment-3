/*
program-22 accept 3 numbers from  user using while loop and check each numbers...
*/

#include<stdio.h>
main()
{
	int n,snum=0,remainder,originalnum,count;
	count=0;
	while(count < 3)
	{
		printf("\n\n\t Enter a number :");
		scanf("%d",&n);
		originalnum=n;
		
		while(n !=0)
		{
			remainder = n %10;
			snum=snum *10 + remainder;
			n /=10;
		}
		if(originalnum ==snum)
		printf("\n\n\t %d is a palidrome.",originalnum);
		else
		printf("\n\n\t %d is not a palidrome.",originalnum);
		snum=0;
		count++;
		
	}
}
