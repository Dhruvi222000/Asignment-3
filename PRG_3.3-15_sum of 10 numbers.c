/*
program-15 Calcute sum of 10 numbers using of while loop.
*/

#include<stdio.h>
main()
{
	int i=1;
	int sum=0;
	int num;
	
	while(i<=10)
  {
  	 printf("\n\n\t Enter number %d :",i);
  	 scanf("%d",&num);
  	 sum +=num;
  	 i++;
  }
      printf("\n\n\t The sum of a 10 numbers is :%d ",sum);
	
}
