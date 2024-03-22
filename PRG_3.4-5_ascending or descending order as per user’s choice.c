/*
program-5  WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice.
*/


#include<stdio.h>
main()
{
    int n,i;
     printf("\n\n\t  Enter the size of arrays: ");
     scanf("%d", &n);

    int arr1[n], arr2[n];

      printf("\n\n\t  Enter elements of first array: ");
      for (i = 0; i < n; i++) 
	  {
        scanf("%d", &arr1[i]);
     }

      printf("\n\n\t  Enter elements of second array: ");
      for ( i = 0; i < n; i++)
	 {
        scanf("%d", &arr2[i]);
     }

    int choice;
      printf("\n\n\t  Enter 1 for ascending order or 2 for descending order: ");
      scanf("%d", &choice);

      if (choice == 1) 
	{
        bubbleSort(arr1, n);
        bubbleSort(arr2, n);
        
    }
	   else if (choice == 2)
	  {
        bubbleSortDescending(arr1, n);
        bubbleSortDescending(arr2, n);
    } 
	  else
    {
        printf("\n\n\t  Invalid choice! ");
        return 1;
    }

      printf("\n\n\t  Sorted first array: ");
      printf Array(arr1, n);

      printf("\n\n\t   Sorted second array: ");
      printfArray(arr2, n);
      
}
