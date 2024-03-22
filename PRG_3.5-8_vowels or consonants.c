/*
8. Write a program in C to count the total number of vowels or consonants in a
string.
*/
#include<stdio.h>

 main() 
 {

  char line[200];
  int vowels, consonant, digit, space,i;

  
  vowels = consonant = digit = space = 0;

  
  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);

  
  for ( i = 0; line[i] != '\0'; ++i) 
  {

    
    line[i] = tolower(line[i]);

    
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {

      
      ++vowels;
    }

    
    else if ((line[i] >= 'a' && line[i] <= 'z')) {
      ++consonant;
    }

    
    else if (line[i] >= '0' && line[i] <= '9') {
      ++digit;
    }

    
    else if (line[i] == ' ') {
      ++space;
                             } 
}

  printf("\n\n\t Vowels: %d", vowels);
  printf("\n\n\t Consonants: %d", consonant);
  printf("\n\n\t Digits: %d", digit);
  printf("\n\n\t White spaces: %d", space);

}
