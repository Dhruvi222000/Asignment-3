/*
program-12.Write a program in C to find the number of times a given word 'is' appears in
the given string.
*/


#include <stdio.h>
#include <string.h>
main()
{
    int ctr = 0, i, freq = 0; 
    int t, h, e, spc; 
    char str[100]; 

    printf("\n\n\t  Find the number of times the word 'is ' in any string combination appears :"); 
    printf("\n\n----------------------------------------------------------------------");

    printf("\n\n\t  Input the string : ");
    fgets(str, sizeof str, stdin); 

    ctr = strlen(str); 

    
    for (i = 0; i <= ctr - 3; i++) {
        
        t = (str[i] == 't' || str[i] == 'T');
        h = (str[i + 1] == 'h' || str[i + 1] == 'H');
        e = (str[i + 2] == 'e' || str[i + 2] == 'E');
        spc = (str[i + 3] == ' ' || str[i + 3] == '\0');

        
        if ((t && h && e && spc) == 1)
            freq++;
    }

    printf("\n\n\t  The frequency of the word \'is\'  %d :", freq); 
	
	
}
