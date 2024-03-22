/* 
program 1. Write a program in C to find the length of a string without using library
functions.
*/

#include<stdio.h>
main()
{
	int str[100];
	int l=0;
	printf("\n\n\t Please enter any string :");
	gets(str);
	while(str[l] != '\0')
	{
		l++;
	}
	printf("\n\n\t Length of a string is : %d",l);
}
