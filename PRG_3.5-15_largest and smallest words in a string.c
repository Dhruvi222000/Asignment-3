//program-15 Write a program in C to find the largest and smallest words in a string.


#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
    char string[50], word[30], max[15], min[15], c;
    int i = 0, j = 0, f = 0;
    printf("\n\n\t Enter a string: ");
    i = 0;
    do
    {
        fflush(stdin);
        c = getchar();
        string[i++] = c;
 
    } 
	while (c != '\n');
    string[i - 1] = '\0';
    for (i = 0; i < strlen(string); i++)
    
    {
        while (i < strlen(string) && !isspace(string[i]) && isalnum(string[i]))
        {
            word[j++] = string[i++];
        }
        if (j != 0)
        {
            word[j] = '\0';
            if (!f)
            {
                f = !f;
                strcpy(max, word);
                strcpy(min, word);
            }
            if (strlen(word) > strlen(max))
            {
                strcpy(max, word);
            }
            if (strlen(word) < strlen(min))
            {
                strcpy(min, word);
            }
            j = 0;
        }
    }
    printf("\n\n\t    The largest word is '%s' and smallest word is '%s' in '%s'", max, min, string);
 
    
}
