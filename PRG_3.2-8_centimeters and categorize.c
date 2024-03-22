/*
   program-8 WAP to accept the height of a person in centimeters and categorize the
              person according to their height
*/

#include<stdio.h>
main()
{
	float height_cm;
	printf("\n\n\t enter the centimeters :");
	scanf("%f",&height_cm);
	
	   if(height_cm,150)
	{
	   printf("\n\n\t short stature :");
	}
	 
	   else if (height_cm>=150 && height_cm<=170)
    {
        printf("\n\n\t average stature :");
    }  
    
       else 
    {
    	printf("\n\n\t Tall stature :");
    	
	}
}
