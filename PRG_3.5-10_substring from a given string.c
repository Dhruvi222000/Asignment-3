//program-10  Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>
main()
{
    int pos, len;
    char string[14] = "Dhruvi";
    char substring[14];
 
    
    pos = 6;
    len = 5;
    printf("\n\n\t  String: %s ", string);
    printf("\n\n\t  substring is: ");
 
    strncpy(substring,string+(pos-1),len);
    printf(substring);
 
    
    char string2[5] = "vaidya";
    char substring2[5];
     
    pos = 1;
    len = 3;
    printf("\n\n\t  String: %s ", string2);
    printf("\n\n\t  substring is: ");
 
    
    strncpy(substring2,string2+(pos-1),len);
    printf(substring2);

}
 
