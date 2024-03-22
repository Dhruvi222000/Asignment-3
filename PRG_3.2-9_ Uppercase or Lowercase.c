/*
 program-9 C Program to Check Uppercase or Lowercase or Digit or Special Character.
*/

#include<stdio.h>
main()
{
	        char ch;
            printf("\n\n\t  enter any character : ");
            scanf("%c", &ch);

     
         if (isupper(ch))
    {
             printf("\n\n\t  %c is uppercase :", ch);
    }
    
        else if (islower(ch))
    {
             printf("\n\n\t  %c is lowercase :", ch);
    }
   
        else if (isdigit(ch))
    {
            printf("\n\n\t   %c is a digit :", ch);
    }
   
        else
    {
            printf("\n\n\t   %c is a special character :", ch);
    }

}

