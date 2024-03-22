/*
 program-9 Write a program make a summation of given number (E.g., 1523 Ans: -11)
*/

#include<stdio.h>
main()
{ 
    	int number=1523,sum=0;
	
    	while(number !=0)
	{
		    sum+=number % 10;
	    	number /=10;
	}
    	printf("\n\n\t  Summation the digits of a :  %d ",sum);
}
