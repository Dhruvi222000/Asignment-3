//program-26 (1)+(1+2)+(1+2+3)+(1+2+3+4)+......n)

#include<stdio.h>
main()
{
	int x,y,sum;
	for(x=1;1<y;++x)
	{
		printf("\n\n\t Enter any number :");
		scanf("%d",&y);
		
		printf("(%d)+(%d +%d) +(%d + %d + %d)",y,y,x+1,y,x+1,x+2);
	}
}
