//program-14 Write a program in C to combine two strings manually

#include <stdio.h>
main()
{
 
    char s[] = "\n\n\t   I Am study in Tops Technologies.";
    char s1[] = "\n\n\t  I am career path student .";
 
    strcat(s, s1);
    printf("\n\n\t   Final combine string is: %s ", s);
    
}
