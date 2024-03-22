/*
 program-30 WAP to convert years into  days  and days into years.
*/

#include<stdio.h>
main()
{
	 int days, years, weeks;
	     days = 1329; 
	 
	years = days/365; 
    weeks = (days % 365)/7; 
    days = days - ((years*365) + (weeks*7)); 

   
    printf("\n\n\t Years: %d", years);
    scanf("%d",&years);
    
    printf("\n\n\t Weeks: %d", weeks);
    scanf("%d",&weeks);
    
    printf("\n\n\t Days: %d", days);
    scanf("%d",&days);

}