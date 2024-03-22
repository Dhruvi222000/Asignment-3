/*
program-10 WAP to perform Palindrome number using for loop and function.
*/

#include<stdio.h>
int Palindrome(int num)
 {
    int reverse = 0, remainder, original;

    original = num;

    for (; num != 0; num /= 10)
	 {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
    }

    
     if (original == reverse)
      return 1; 
    else
     return 0; 
}

 main()
{
    int num;
    printf("\n\n\t  Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("\n\n\t  %d is a palindrome.", num);
    else
        printf("\n\n\t  %d is not a palindrome.", num);


}
