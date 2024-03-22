/*
program-14 perfrom 2d martix array
*/

#include<stdio.h>
main()
{
	int mtr[5][5];
	
	int x,y;
	
		for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
			{
				
				printf("\n\n\t Input matrix : [%d][%d]",x,y);
				scanf("%d",&mtr[x][y]);
			}
			printf("\n\n");
		}
		for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
			{
				printf(" %d",mtr[x][y]);
			}
			printf("\n\n");
		
	}
}
