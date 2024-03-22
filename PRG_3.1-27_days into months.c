/*
 program-27 convert days into months
*/

#include<stdio.h>
main()
{
	   int days;
	   float months;
	   
	    printf("\n\n\t enter ther number of days:");
	    scanf("%d",&days);
	    
	    months = days / 30.0;
	    
	    printf ("\n\n\t  enter is approximately  %d days  : " ,days);
	    printf ("\n\n\t  enter is approximately  %f months : ",months);
}