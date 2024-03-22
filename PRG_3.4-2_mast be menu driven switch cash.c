/*
program-2 Wap of addition,subtraction,multiplication and division using switch case.
          (mast be menu driven)
*/

#include<stdio.h>
main()
{
    	int  num1,num2,result;
    	int choice;
	
      	printf("\n\n\t  Enter first number :");
    	scanf("%d",num1);
	
    	printf("\n\n\t  Enter second number :");
	    scanf("%d",num2);
	
    	printf("\n\n\t  Addition ");
    	printf("\n\n\t  subtraction  ");
	    printf("\n\n\t  multiplication ");
       	printf("\n\n\t  division ");
	
	
    	printf("\n\n\t  Enter your choice :");
    	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			result =num1 + num2;
			printf("\n\n\t  result %d :",result);
			break;
			
		case 2 :
			result =num1 - num2;
			printf("\n\n\t  result %d :",result);
			break;
			
		case 3:
			result =num1 * num2;
			printf("\n\n\t  result %d :",result);
			break;
			
		case 4 :
	    	if(num2!=0)
		    	{
		    	result =num1 / num2;
		    	printf("\n\n\t  result %d :",result);
		        }
		    else
		        {
		        	printf("\n\n\t Cannot divide by zero :");
				}
				break;
				
				default
			        printf("\n\n\t  invalid choice  :");
				     
		
		    
	}
}
