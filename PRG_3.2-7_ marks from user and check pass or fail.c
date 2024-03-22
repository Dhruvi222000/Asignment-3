/*
 program-7 Accept marks from user and check pass or fail
*/

#include<stdio.h>
main()
{
    	int  marks;

      printf("\n\n\t Enter your marks : ");
      scanf("%d", &marks);

    
       if (marks >= 40) 
	{
         printf("\n\n\t   passed : ");
    } 
    
	    else
    {

	        printf("\n\n\t  failed : ");
    }

}
