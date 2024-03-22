//program-7 Write a program in C to copy one string to another string.


#include<stdio.h>
main()
{
	char str[100];
	char s2[100];
	
	printf("\n\n\t Enter any string :");
	scanf("%s",&str);
	
	strcpy(str,s2);
	printf("\n\n\t S2 : %s",s2);
}
