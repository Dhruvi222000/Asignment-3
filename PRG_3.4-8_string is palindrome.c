/*
program-8 WAP to reverse a string and check that the string is palindrome or not Write a program of structure employee that provides the following 
          a. information -print and display empno, empname, address andage
          b. Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage 
*/

#include<stdio.h>
main()
{
    char str[100];
      printf("\n\n\t  Enter a string: ");
      scanf("%s", str);
    
    reverseString(str);
    printf("\n\n\t  Reversed string: %s", str);
    
      if (isPalindrome(str))
   {
        printf("\n\n\t  The string is a palindrome."); 
    } 
	  else
    {
        printf("\n\n\t  The string is not a palindrome.");
    }
    
      int Employee employees[5];
      printf("\n\n\t  Enter information for five employees:");
      for (int i = 0; i < 5; i++)
	 {
        printf("\n\n\t  Employee %d:", i+1);
        printf("\n\n\t  Enter employee number: ");
        scanf("%d", &employees[i].empno);
        
        printf("\n\n\t  Enter employee name: ");
        scanf("%d", employees[i].empname);
        
        printf("\n\n\t  Enter address: ");
        scanf("%d", employees[i].address);
        
        printf("\n\n\t  Enter age: ");
        scanf("%d", &employees[i].age);
    }
    
    
       printf("\n\n\t  Information for five employees:");
       for (int i = 0; i < 5; i++)
   {
        printf("\n\n\t Employee %d:", i+1);
        printEmployee(employees[i]);
   }
    
    
}





}
