/*
program-13 Write a program in C to remove characters from a string except alphabets.
*/

#include <stdio.h>
main()
{
      char line[50],i;
      printf("\n\n\t Enter a string : ");
      fgets(line, sizeof(line), stdin); 

       for (i = 0, j; line[i] != '\0'; ++i)
      {

      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) 
	  {
         for (j = i; line[j] != '\0'; ++j)
	  {
           
          line[j] = line[j + 1];
      }
           line[j] = '\0';
      }
      }
        printf("\n\n\t   Output String : ");
         puts(line);
  
}

