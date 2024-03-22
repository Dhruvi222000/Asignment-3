/*
  program-12 Accept number of students from user. I need to give 5 apples to each student 
               How many apples are required?
*/

#include<stdio.h>
main()
{
	int apple1,apple2,apple3,apple4,apple5;
	int sum;
		
	printf("\n\n\t enter of the 5 apples :");
	scanf("%d %d %d %d %d ",&apple1, &apple2, &apple3, &apple4, &apple5);
	
	sum = apple1 + apple2 +  apple3 + apple4 + apple5;
	
	printf("\n\n\t the sum of 5 apples is : %d",sum);
	
}
