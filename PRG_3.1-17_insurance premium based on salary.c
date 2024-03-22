/*
 program-17 Calculate person’s insurance premium based on salary
*/

#include<stdio.h>
main()
{

        float Basic, HRA, DA, Gross_Salary;
  	
	    printf("\n\n\t  Please Enter the Basic Salary of an Employee  :  ");
    	scanf("%f", &Basic);
  
  	  
  		HRA = (Basic * 8) / 100; 
		DA = (Basic * 10) / 100;   	
  	
  	
     	Gross_Salary = Basic + HRA + DA;
	    printf("\n\n\t  Gross Salary of this Employee  =  %.2f", Gross_Salary); 
}
