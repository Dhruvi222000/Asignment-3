/*
 program-14 Find ascii value of given number
*/

#include<stdio.h>
main()
{
	int sum =0;
	char name1;

	
	  printf("\n\n\t Enter a name: ");  
     scanf("%s", &name1);  
   
    {  
        printf("\n\n\t The ascii value of the character %c is ",name1);  
        sum=sum+name1;
          
    }  
          printf("\n\n\t Sum of the ascii value of a string is : %d", sum);  
}
