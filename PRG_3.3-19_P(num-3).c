/* patterns number(2)
A
A B
A B C
A B C D
A B C D E 
*/

#include<stdio.h>
main()
{
	int i,j,number;
	char ch;
	
	printf("\n\n\t  Input number :");
	scanf("%d",&number);
	
	  i=1;
	  while(i<=number)
	{
		j=1;
		ch='A';
		while(j<=i)
	{
		printf(" %c",ch);
		ch++;
		j=j+1;
	}
		printf("\n");
		i=i+1;
	}
}
