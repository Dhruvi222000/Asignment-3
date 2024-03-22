/*
 program-35 Accept the input month number and print number of days in that month.
*/

#include<stdio.h>
main()
{
       
        int month;
          printf("\n\n\t  enter the month Number 1 to 12  :  ");
          scanf("%d", &month);
  
       if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
  {
           	printf("\n\n\t  31 Days in this month");  	
  }
       else if ( month == 4 || month == 6 || month == 9 || month == 11 )
  {
  	        printf("\n\n\t  30 days in this month :");  	
  }  
       else if ( month == 2 )
  {
  	        printf("\n\n\t  enter 28 or 29 days in this month :");  	
  } 
       else
             printf("\n\n\t   enter Valid Number between 1 to 12 :");
  
	  
       
           
}
