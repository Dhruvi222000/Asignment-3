/*
  program-24 Accept 5 employees name and salary and count average and total salary.
*/

#include <stdio.h>
main()
{
          
       int s1,s2,s3,s4,s5,p,t,a;
       char en[20];
       
       printf("\n\n\t enter name of frist employee :");
       scanf("%s%d",&p,&s1);
       
       printf("\n\n\t enter name of second employee :");
       scanf("%s%d",&p,&s2);
       
       printf("\n\n\t enter name of third employee :");
       scanf("%s%d",&p,&s3);
       
       printf("\n\n\t enter name of fourth employee :");
       scanf("%s%d",&p,&s4);
       
       printf("\n\n\t enter name of fifth employee :");
       scanf("%s%d",&p,&s5);
       
       t=s1+s2+s3+s4+s5;
       
       printf("\n\n\t Total  salary = %d",t);
       a=t*12;
       printf("\n\n\t Average salary =%d",a);
}
