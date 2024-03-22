/* 
 program-29 convert minutes into seconds and hours
*/

#include<stdio.h>
main()
{
	 int  minutes,secounds,hours,
	 
   	 printf("\n\n\t  enter the numer of a minutes :");
   	 scanf("%d",&minutes);
   	 
   	 printf("\n\n\t  enter the numer of a secounds :");
   	 scanf("%d",&secounds);
   	 
   	 printf("\n\n\t  enter the numer of a hours :");
   	 scanf("%d",&hours);
   	 
   	 hours = minutes / 60;
   	 secounds = minutes * 60;
   	 
   	 printf("\n\n\t minutes is equal to %d  hours :",hours);
   	 printf("\n\n\t minutes is equal to %d  secounds :",secounds);
   	 printf("\n\n\t minutes is equal to %d  minutes :",mintus);
}