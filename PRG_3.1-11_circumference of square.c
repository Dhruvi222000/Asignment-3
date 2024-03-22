/*
program-11 Find circumference of square formula : C = 4 * a
*/

#include<stdio.h>
main()
{
	float side,perimeter;
	
	printf("\n\n\t  Enter side of  a square: ");
	scanf("%f",&side);
	
 
	perimeter=4*side;
	printf("\n\n\t  POS: %f\n",perimeter);
}