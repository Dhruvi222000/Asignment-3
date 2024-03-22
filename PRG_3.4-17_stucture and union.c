/*
program-17wap to show difference between stucture and union....
*/

#include<stdio.h>
struct student
{
	char name [50];
	int age;
	float marks;
};

union info 
{
	int id;
	float salary;
};



main()
{
    struct student s1;
	strcpy(s1.name,"Dhruvi");
	s1.age=23;
	s1.marks=89.5;
	
	printf("\n\n\t Structure Example :");
	printf("\n\n\t Name :%s ",s1.name);	
	printf("\n\n\t Age :%d ",s1.age);	
	printf("\n\n\t Marks :%.2f ",s1.marks);
	
	printf("\n\n\t.......................................");
	
	union info info;
	info.id=101;
	info.salary=5000000;
	
	printf("\n\n\t Union Example :");
	printf("\n\n\t ID :%d ",info.id);
	printf("\n\n\t salary :%.2f ",info.salary);
	
		
	
}
