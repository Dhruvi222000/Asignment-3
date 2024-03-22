/*
  program-3 WAP to take 10 no. Input from user find out below values
            a. How many Even numbers are there
            b. How many odd numbers are there
            c. Sum of even numbers
            d. Sum of odd numbers
*/

#include<stdio.h>
main()
{
	      int numbers[10];
          int even_count = 0, odd_count = 0;
          int even_sum = 0, odd_sum = 0;

           printf("\n\n\t  Enter 10 numbers :");
           scanf("%d", &numbers);
   
                      
       int i=0;
       while (i<10+i++)
	 {
        if (numbers[i] % 2 == 0) 
	 {
            even_count++;
            even_sum += numbers[i];
     }
		 else
	 {
            odd_count++;
            odd_sum += numbers[i];
     }
     }

    
    printf("\n\n\t   Number of even numbers: %d ", even_count);
    printf("\n\n\t   Number of odd numbers: %d  ", odd_count);
    printf("\n\n\t   Sum of even numbers: %d    ", even_sum);
    printf("\n\n\t   Sum of odd numbers: %d     ", odd_sum);

}
