/*
  program-4 WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)
              using conditional statement
*/

#include<stdio.h>
main()
{

       char operator;
       int  num1, num2, result;

       printf("\n\n\t Enter an operator (+, -, *, /, %%): ");
       scanf("%c", &operator);

       printf("\n\n\t  Enter two numbers: ");
       scanf("%lf %lf", &num1, &num2);
       
       

        if(operator)
	 {
	 	{
	
       
            if (num2 != 0)
       
	         result = num1 / num2;
	         
              printf("\n\n\t Result: %.2lf", result);
            } 
			    else
			{
				
                printf("\n\n\t  Division by zero:");
            }
               break;
               case '%':
               if (num2 != 0)
            {
		
			 
			     result = (int)num1 % (int)num2;
                 printf("\n\n\t  Result: %.2lf", result);
                
            } 
		    	else
			{
		
                printf("\n\n\t Error: Modulo by zero :");
            }
            break;
            default:
                  printf("\n\n\t  Error: Invalid operator\n");
    }

    
           
    }

}
