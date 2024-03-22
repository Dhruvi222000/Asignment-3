/*
 program-9 C Program to Check Uppercase or Lowercase or Digit or Special Character.
*/

#include<stdio.h>
main()
{
	char ch;
	printf("\n\n\t enter a character :");
	scanf("%c",&ch);
	
	      if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
	   {
                printf("\n\n\t  %c is an alphabet :", ch);
    
          if (ch >= 'a' && ch <= 'z')
       {
	   
	            printf("\n\n\t  %c is a lowercase alphabet :", ch);
        }
	    	else 
		{
                printf("\n\n\t  %c is an uppercase alphabet :", ch);
        }
        }
	       else if (ch >= '0' && ch <= '9')
	    {
                printf("\n\n\t  %c is a digit :", ch);
                
        }
    
	       else
     	{
               printf("\n\n\t %c is a special character :", ch);
        } 

}
