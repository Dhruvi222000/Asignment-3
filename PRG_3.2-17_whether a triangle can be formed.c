/*
 program-17 Write a C program to check whether a triangle can be formed with the given
             values for the angles.
*/

#include<stdio.h>
main()
{
	    float angle1, angle2, angle3;

        printf("\n\n\t enter three angles of the triangle : ");
        scanf("%f %f %f", &angle1, &angle2, &angle3);
    
        if (angle1 + angle2 + angle3 == 180)
	 {
        printf("\n\n\t  Triangle can be formed with the given angles :");
     }
	   else
     {
        printf("\n\n\t  Triangle cannot be formed with the given angles :");
     }

}
