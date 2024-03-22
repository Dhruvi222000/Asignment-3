/*
 program-19 .Calculate compound interest
*/

#include<stdio.h>
main()
{
	 float PAmount, ROI, Time_Period,CIFuture, CI;
	 
   printf("\n\n\t enter the Principal Amount :");
   scanf("%f", &PAmount);
 
   printf("\n\n\t enter Rate Of Interest :");
   scanf("%f", &ROI);
 
   printf("\n\n\t enter the Time Period in Years :");
   scanf("%f", &Time_Period);
 
   CIFuture = PAmount * (pow(( 1 + ROI/100), Time_Period));
   CI = CIFuture - PAmount;
   
   printf("\n\n\t  future compound interest for principal amount %.2f is = %.2f", PAmount, CIFuture);
   printf("\n\n\t  compound interest for principal amount %.2f is = %.2f", PAmount, CI);
 
}
