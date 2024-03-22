/*
 program-37 WAP to show 
            (1). Monday to Sunday using switch case
            (2). Vowel or Consonant using switch case
*/

#include<stdio.h>
main()
{
      	 int choice;
         char ch;

          printf("\n\n\t   Choose an option ");
          printf("\n\n\t   1. Display days of the week ");
          printf("\n\n\t   2. Check vowel or consonant ");
          scanf("%d", &choice);

         switch (choice)
	 {
	 	// (1)  Monday to Sunday using switch case
         case 1:
               printf("\n\n\t  Enter a number between 1 to 7: ");
               scanf("%d", &choice);
               
          switch (choice)
	 {
                case 1:
                    printf("\n\n\t   Monday ");
                    break;
                case 2:
                    printf("\n\n\t   Tuesday ");
                    break;
                case 3:
                    printf("\n\n\t   Wednesday ");
                    break;
                case 4:
                    printf("\n\n\t   Thursday ");
                    break;
                case 5:
                    printf("\n\n\t   Friday ");
                    break;
                case 6:
                    printf("\n\n\t   Saturday ");
                    break;
                case 7:
                    printf("\n\n\t   Sunday ");
                    break;
                    
              default:
                      printf("\n\n\t  Invalid choice :   ");
                      printf("\n\n\t  ..................  ");
     } 
              break;
              
              
            //(2) Vowel or Consonant using switch case
         case 2:
        	
               printf("\n\n\t    Enter a character : ");
               scanf(" %c", &ch);
               
         switch (ch)
	 {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    printf("\n\n\t  %c is a vowel : ", ch);
                    break;
             default:
                    printf("\n\n\t  %c is a consonant :", ch);
     } 
             break; 
            
        default:
                    printf("\n\n\t  Invalid choice ");
    }
}

