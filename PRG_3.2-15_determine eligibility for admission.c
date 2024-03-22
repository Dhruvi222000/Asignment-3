/*
program-15   Write a C program to determine eligibility for admission to a professional
              course based on the following criteria
              Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
              in Chem>=50 and Total in all three subject >=190 or Total in Maths and
              Physics >=140 --------------------------------------Input the marks obtained in
              Physics :65 Input the marks obtained in Chemistry :51 Input the marks
              obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
              188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/

#include<stdio.h>
main()
{
	   int phy_marks, chem_marks, math_marks, total_marks_all, total_marks_math_phy;

       printf("\n\n\t  enter the marks obtained in Physics : ");
       scanf("%d", &phy_marks);
    
       printf("\n\n\t  enter the marks obtained in Chemistry : ");
       scanf("%d", &chem_marks);
    
       printf("\n\n\t  enter the marks obtained in Mathematics : ");
       scanf("%d", &math_marks);
    
       printf("\n\n\t  total marks of Maths, Physics and Chemistry : ");
       scanf("%d", &total_marks_all);
    
       printf("\n\n\t  total marks of Maths and Physics : ");
       scanf("%d", &total_marks_math_phy);

        if (phy_marks >= 55 && chem_marks >= 50 && math_marks >= 65 && total_marks_all >= 190)
	 {
           printf("\n\n\t candidate is eligible :");
          
     }
      	else if (total_marks_math_phy >= 140)
    { 
         printf("\n\n\t  candidate is eligible :");
    } 
	    else
    {
        printf("\n\n\t  candidate is not eligible :");
    }

}
