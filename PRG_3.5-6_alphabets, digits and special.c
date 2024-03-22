/*
program-6. Write a program in C to count the total number of alphabets, digits and special
characters in a string
*/
#include<stdio.h>
main()
{
	char s[100];
	int x=0,d=0,sc=0,i=0;
	printf("\n\n\t Enter a string :");
	fgets(s,sizeof(s),stdin);
	
	while(s[i] != '\0')
	{
		if((s[i]>= 'x' && s[i] <= 'z') || (s[i] >= 'X' && s[i] <= 'Z'))
		{
			x++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			d++;
		}
		else if ((s[i] >= 33 && s[i] <=47) || (s[i] >=58 && s[i] <= 96) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <=126))
		{
			sc++;
		}
		i++;
		
	}
	printf("\n\n\t Alphabets : %d",x);
	printf("\n\n\t Digits : %d",d);
	printf("\n\n\t Special character : %d",sc);
}
