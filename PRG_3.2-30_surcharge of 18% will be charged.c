/*
program-30 If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
            minimum bill should be of Rs. 256/-
*/

#include<stdio.h>
main()
{
	   float bill, total_bill;
       const float surcharge_rate = 0.18;
       const float minimum_bill = 256.0;
       const float threshold = 800.0;

        printf("\n\n\t enter the bill amount: ");
        scanf("%f", &bill);

       if (bill > threshold) 
	{
        total_bill = bill + (bill * surcharge_rate);
    } 
	    else
	{
        total_bill = bill;
    }

        if (total_bill < minimum_bill)
   {
        total_bill = minimum_bill;
   }  

    printf("\n\n\t  Total bill amount: Rs. %.2f ", total_bill);

}
