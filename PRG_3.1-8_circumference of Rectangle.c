/*
 program-8 Find circumference of Rectangle formula : c=4*a
 */
 
 #include<stdio.h>
 main()
 {
 	
 	float width, length, perimeter;
 	
 	printf("\n\n\t  enter the width of a rectangle :   ");
 	scanf("%f", &width);
 	
 	printf("\n\n\t  enter the length of a rectangle :   ");
 	scanf("%f", &length);
 	
 	perimeter =2 * (length + width);
 	
 	printf("\n\n\t perimeter of a rectangle = %.2f",perimeter);
 	
 	
 	
 }