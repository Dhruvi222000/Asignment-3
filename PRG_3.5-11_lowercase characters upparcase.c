/*
program-11.Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.
*/


#include <stdio.h>
main()
{
    char str[100]; 
    int ctr, ch, i; 

    printf("\n\n\t   Replace lowercase characters by uppercase and vice-versa :"); 
    printf("\n\n--------------------------------------------------------------");

    printf("\n\n\t   Input the string : ");
    fgets(str, sizeof str, stdin); 

    i = strlen(str);
    ctr = i;
        printf("\n\n\t    The given sentence is   : %s", str); 

        printf("\n\n\t    After  changed the string to upper or lower is: ");
        for (i = 0; i < ctr; i++) 
	{
        ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
        putchar(ch);
    }
        printf("\n\n");
	
	
}
