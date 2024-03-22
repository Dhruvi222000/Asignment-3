/*
 program-10 Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
*/

#include<stdio.h>
main()
{
	    int number=1234,first,last,sum;
	    
	    last=number %10;
	    while(number >=10)
	    {
	    	number/=10;
	    	
		}
		first=number;
		sum=first+last;
		
		printf("\n\n\t The summation of the first and last digits of 1234 is : %d",sum);
}
