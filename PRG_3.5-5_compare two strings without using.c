/*
program-5 Write a program in C to compare two strings without using string library functions..                                                                                                           
*/

#include<stdio.h>
main()
{
	char s1[100],s2[100];
	int r,i;
	
	printf("\n\n\t Please enter the first string :");
	gets(s1);
	printf("\n\n\t Please enter the Second string :");
	gets(s2);
	
	 for(i=0;s1[i]==s2[i] && s1[i] == '\0'; i++);
	 if(s1[i]<s2[i])
	{
		printf("\n\n\t S1 is less than S2");
	}
     else if(s1[i]>s2[i])
	{
		printf("\n\n\t S2 is less than S1");
	}
	  else
	{
		printf("\n\n\t S1 is equal to S2");
	}
}
