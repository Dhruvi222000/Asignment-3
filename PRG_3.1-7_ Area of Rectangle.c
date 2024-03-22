/*
 program-7 Find area of Rectangle formula :A= wI
 */
 
 #include<stdio.h>
 main()
 {
 	float width, length,area;
 	
 	printf("\n\n\t  enter the width of a rectangle :");
 	scanf("%f", &width);
 	
 	printf("\n\n\t  enter the length of a rectangle :");
 	scanf("%f", &length);
 	
 	area = length * width;
 	
 	printf("\n\n\t area of a rectangle = %.2f",area);
 	
 	
 }