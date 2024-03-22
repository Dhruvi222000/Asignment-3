/*
 program-22 Calculate compound interest (Compound Interest formula:
                a. Formula to calculate compound interest annually is given by:
                    Amount= P(1 + R/100)t
                b. Compound Interest = Amount – P
*/

#include<stdio.h>
main()
{
        	float principal, rate, time, amount, compound_interest;
        	
           printf("\n\n\t  Enter principal amount : ");
           scanf("%f", &principal);
           
           printf("\n\n\t  Enter rate of interest a percentage : ");
           scanf("%f", &rate);
           
           printf("\n\n\t  Enter time a years : ");
           scanf("%f", &time);

   
          amount = principal * pow(1 + rate / 100, time);

    
          compound_interest = amount - principal;

    
         printf("\n\n\t  Amount after %0.2f years: %0.2f ", time, amount);
         printf("\n\n\t  Compound Interest: %0.2f ", compound_interest);

}
