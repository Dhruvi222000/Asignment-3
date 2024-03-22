/*
program-32 .Write a C program to input basic salary of an employee and calculateits
            Gross salary according to following:
            Basic Salary <= 10000 : HRA = 20%, DA = 80%
            Basic Salary <= 20000 : HRA = 25%, DA = 90%
            Basic Salary > 20000 : HRA = 30%, DA = 95%\ 
*/

#include<stdio.h>
main()
{
    	float basic_salary,gross_salary,hra,da;
    	printf("\n\n\t   enter the basic salary  an employee  :  ");
    	scanf("%f", &basic_salary);
  	
    	gross_salary = basic_salary + gross_salary + hra + da; 
       	printf("\n\n\t  gross salary  this employee  =  %.2f", gross_salary); 
	
  
  	    if (basic_salary <= 10000)
  	{
  	    	hra = (basic_salary * 8) / 100; 
		    da = (basic_salary * 10) / 100; 
  	} 
  	   else if (basic_salary <= 20000)
  	{
  	    	hra = (basic_salary * 16) / 100;
	     	da= (basic_salary * 20) / 100;  	
  	}
  	   else
  	{
	     	hra = (basic_salary * 24) / 100; 
	   	    da = (basic_salary * 30) / 100;
	}
	    
	
}
