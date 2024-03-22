/*
 program-19  Write a program in C to calculate and print the electricity bill of a given
               customer. The customer ID, name, and unit consumed by the user should
               be captured from the keyboard to display the total amount to be paid to the
               customer. The charge are as follow :
            20. Unit
		    21. Charge/unit
            22. upto 350
		    23. @1.20
            24. 350 and above but less than 600 
			25. @1.50
            26. 600 and above but less than 800
		    27. @1.80
            28. 800 and above 29. @2.00
*/

#include<stdio.h>
main()
{
	         int name, customerid, units;
             printf("\n\n\t  enter customer id : ");
             scanf("%d",&customerid);
             
             printf("\n\n\t  enter customer name : ");
             scanf("%d", &name);
             
             printf("\n\n\t  enter units consumed : ");
             scanf("%d", &units);

    
          float charge;
          if (units <= 350)
	{
             charge = units * 1.20;
    } 
	     else if (units <= 600)
    {
             charge = 350 * 1.20 + (units - 350) * 1.50;
    } 
	     else if (units <= 800)
   {
             charge = 350 * 1.20 + 250 * 1.50 + (units - 600) * 1.80;
   }
     	else
		 
  	{
	        charge = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (units - 800) * 2.00;
    }

   
        printf("\n\n\t    customer id : %d ", customerid);
    
        printf("\n\n\t    customer Name : %d ", name);
    
        printf("\n\n\t    units Consumed : %d ", units);
    
        printf("\n\n\t    total amount to be paid : %.2f ", charge);

}
