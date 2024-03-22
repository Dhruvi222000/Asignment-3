//  Addition  1+ 2+ 3+ 4+ 5+ .......n;

#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("\n\n\t  Enter the value n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+= i;
	}
	  printf("\n\n\t The sum of a : %d",sum);
	  
}
