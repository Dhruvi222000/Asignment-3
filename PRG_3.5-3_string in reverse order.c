/*
program-3 Write a program in C to print individual characters of a string in reverse order
*/
#include<stdio.h>
main()
{

	char s[20];
	int x,l=0;
	printf("\n\n\t Enter any string : ");
	scanf("%s",&s);
	
	printf("\n\n\t Individual character from string in reverse order : ");
	while (s[l] != '\0')
	{
		l++;
	}
   for(x=l-1;x>=0;x--)
      {
      	printf("\n\n\t %c",s[x]);
      }
}
