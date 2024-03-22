/*
 program-31  convert kilometers into meters
*/

#include<stdio.h>
main()
{
    	float kilometers, meters;
    	
        printf("\n\n\t Enter distance in kilometers: ");
        scanf("%f", &kilometers);
        
        meters = kilometers * 1000;

   
         printf("\n\n\t  kilometers is equal to %.2f : meters",  meters);
         printf("\n\n\t  kilometers is equal to %.2f : kilometers", kilometers, meters);


}