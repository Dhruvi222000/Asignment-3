/*
 program-18 Write a C program to calculate profit and loss on a transaction.
*/

#include<stdio.h>
main()
{
	   float cost_price, selling_price, profit, loss;

       printf("\n\n\t  enter the cost price: ");
       scanf("%f", &cost_price);
       
       printf("\n\n\t  enter the selling price: ");
       scanf("%f", &selling_price);

    
       if (selling_price > cost_price)
   { 
         profit = selling_price - cost_price;
         printf("\n\n\t  Profit: %.2f", profit);
        
   }
	    else if (cost_price > selling_price)
   {
        loss = cost_price - selling_price;
        printf("\n\n\t  Loss: %.2f", loss);
    }
	   else 
	{
        printf("\n\n\t  No profit, no loss ");
    }
}
