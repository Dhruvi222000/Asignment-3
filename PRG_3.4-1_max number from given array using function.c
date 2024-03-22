/* 
  program-1 write a program to find out the max number from given array using function.
*/

#include<stdio.h>
int findmax(int arr[],int size)
{
	int max = arr[0];
	int i;
	for(i=1;i<size;i++)
	{
		if(arr[i] > max)
		{
			max=arr[i];
		}
	}
	return max;
 }
  main()
  {
  	int arr[] ={5 ,7 ,3 ,9, 2};
  	int size=sizeof(arr) /sizeof(arr[0]);
  	int maxnumber=findmax(arr,size);
  	printf("\n\n\t The maximam number in the array is : %d",maxnumber);
  	
  	
	  
 }
	
	
	
	
	
	
	
	
	
	
	
	

