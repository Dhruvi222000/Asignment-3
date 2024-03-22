/*
program-9 Find circumference of Triangle formula : Triangle =a + b+ c
*/

#include<stdio.h>
main()
{
	
	float width, height, c, area, perimeter;
	printf("\n\n\t  enter height and width of the right angled teiangle\n");
	scanf("%f%f",&width,&height);
	
	area =0.5 * width*height;
	c = sqrt((width*width) + (height*height));
	perimeter = width + height +c;
	
	printf("\n\n\t area of right angled triangle is:      %.2f\n" ,area);
	
	printf("\n\n\t other side of right angled triangle is:  %.2f\n",c);
	
	printf("\n\n\t perimeter of right angled triangle is:  %.2f\n",perimeter);

}

