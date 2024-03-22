/*
 program-25 Accept 5 expense from user and find average of expense
 */
 
 #include<stdio.h>
 main()
 {
           int num1, num2, num3,num4,num5,sum;
           float avg;
    
           printf("\n\n\t  Enter the  Number1  = ");
           scanf("%d",&num1);

           printf("\n\n\t   Enter the  Number2 = ");
           scanf("%d",&num2);

           printf("\n\n\t   Enter the  Number3  = ");
           scanf("%d",&num3);
           
           printf("\n\n\t   Enter the  Number4  = ");
           scanf("%d",&num4);
    
    
           printf("\n\n\t   Enter the  Number5  = ");
           scanf("%d",&num5);
    
    
              sum  = num1 + num2 + num3 +num4 +num5;

               avg = sum / 3;

           printf("\n\n\t  The Sum of Three Numbers     = %d", sum); 
           printf("\n\n\t  The Average of Three Numbers = %.2f", avg);
 }