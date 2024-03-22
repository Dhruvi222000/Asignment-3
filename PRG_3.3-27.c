//(27)  1/2 - 2/3 + 3/4 -4/5 + 5/6...........n

#include<stdio.h>
main()
{
	int n,i;
	float sum =0;
	printf("\n\n\t  Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if (i% 2== 1)
		{
			sum+=(float)i/(i+1);
		}
		else
		{
			sum-=(float)i/(i+1);
		}
	}
	 printf("\n\n\t  Sum of the series %.2f",sum);
}
