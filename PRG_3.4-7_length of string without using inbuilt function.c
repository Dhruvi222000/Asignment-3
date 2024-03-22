/*
program-7 WAP Find out length of string without using inbuilt function.
*/

#include<stdio.h>
main()
{

    char str[] = "Hello, world!";
    int length = 0;

    
       while (str[length] != '\0')
	 {
        length++;
     }

       printf("\n\n\t  Length of the string: %d ", length);

}
