/*
 program-6 Find area of Triangle Formula : A = 1/2 × b × h
*/

#include<stdio.h>
main()
{
    float a,b,c,Perimeter, s, Area;	
    
    printf("\n\n\t enter of a sides of triangle = :");
    scanf("%F",&a,b,c);
    
      Perimeter = a+b+c;
       s = (a+b+c)/2;
        Area = sqrt(s*(s-a)*(s-b)*(s-c));
   
            printf("\n\n\t   perimeter of Traiangle = %.2f", Perimeter);
            printf("\n\n\t   semi Perimeter of Traiangle = %.2f",s);
            printf("\n\n\t   area of triangle = %.2f",Area);

}
