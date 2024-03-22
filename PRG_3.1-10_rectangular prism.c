/*
program-10 find the area of a rectangular prism formula : A=2[w1+h1+hw]
*/

#include<stdio.h>


   float find_surface_area_0f_rectangular_prism(float l, float w, float h)
   {
       float surface_area_of_rectangular_prism;
        
       surface_area_of_rectangular_prism = 2 *((l*h)+(w*h)+(l*w));
       
   } 
   
   int main()
   { 
         float l =4.55,w =9.10,h =10;
         
         printf("surface area of the rectangular prism is %f", find_surface_area_of_rectangular_prism(l,w,h));
                
      
      }
