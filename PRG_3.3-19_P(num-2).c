/* patterns number(2)
A
B C
D E F
G H I J 
K L M N O 
*/

#include<stdio.h>
main()
{
	int i,j,n;
	char ch='A';
	
	printf("\n\n\t  Input n :");
	scanf("%d",&n);
	
	  i=1;
	  while(i<=n)
	{
		j=1;
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
