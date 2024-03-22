/*
  program-13 WAP to find minimum number among 3 numbers using ternary operator.
*/

#include<stdio.h>
main()
{
	   int num1, num2, num3, min;
    
       printf("\n\n\t enter three numbers: ");
       scanf("%d %d %d", &num1, &num2, &num3);

        min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

       printf("\n\n\t Minimum number is: %d", min);

}



