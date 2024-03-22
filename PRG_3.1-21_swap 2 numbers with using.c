/*
 program-21 Accept 2 numbers from user and swap 2 numbers with using 3rd variable and
              without using 3rd variable 
*/

#include <stdio.h>
main() 
{

            int num1, num2, temp;

    
           printf("\n\n\t  Enter the first number: ");
           scanf("%d", &num1);
           
           printf("\n\n\t  Enter the second number: ");
           scanf("%d", &num2);

   
                temp = num1;
                num1 = num2;
                num2 = temp;

          printf("\n\n\t   After swapping with a third variable : ");
          printf("\n\n\t   First number: %d", num1);
          printf("\n\n\t   Second number: %d", num2);

    
              num1 = num1 + num2;
              num2 = num1 - num2;
              num1 = num1 - num2;

        printf("\n\n\t  After swapping without a third variable :");
        printf("\n\n\t  First number: %d", num1);
        printf("\n\n\t  Second number: %d", num2);

    
}
