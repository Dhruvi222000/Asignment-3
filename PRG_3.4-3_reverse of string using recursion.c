/*
program-3 WAP to find reverse of string using recursion
*/

#include<stdio.h>
main()
{
	char str[100];
      printf("\n\n\t  Enter a string: ");
      scanf("%s", str);

      printf("\n\n\t   Reversed string: ");
      reverseString(str);

}

     void reverseString(char *str)
   {
    if (*str)
	 {
        reverseString(str + 1);
        printf(" %c", *str);
    }
}

