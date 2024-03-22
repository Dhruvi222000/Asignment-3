/*
 program-31. Write a program in C to read any Month Number in integer and display the number of days for this month.
*/

#include<stdio.h>
main()
{
	     int month;
              printf("\n\n\t   enter month number (1-12): ");
              scanf("%d", &month);

    
        if (month < 1 || month > 12)
   {
            printf("\n\n\t      Invalid month number! ");
       
   }

    
       switch(month)
   {
           case 2:
                     printf("\n\n\t  Number of days: 28 or 29 (leap year)");
                break;
                
                case 4:
                case 6:
                case 9:
                case 11:
                   printf("\n\n\t   Number of days: 30 ");
            break;
            
       default:
                  printf("\n\n\t    Number of days: 31 ");
            break;
    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}
