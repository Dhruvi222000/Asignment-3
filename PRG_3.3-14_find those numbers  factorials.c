/*
program-14 Accept 5 numbers from user and find those numbers  factorials.
*/

#include<stdio.h>
main()
{
    		
		int number[5],i;
		printf("\n\n\t Enter 5 numbers : ");
		for(i=0;i<5;i++)
	{	
		scanf("%d",&number[i]);
    }
        printf("\n\n\t  Factorials :");
        for(i=0;i<5;i++)
    {
    	printf("\n\n\t  %d",number[i]);
	}
}
	

