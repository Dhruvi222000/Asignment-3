/*
program-9  WAP to show difference between Structure and Union. 
*/

#include<stdio.h>
struct Student
  {
    char name[50];
    int age;
    float marks;
};


union Data {
    int i;
    float f;
    char str[20];
};

  main()
{
    struct Student s;
    strcpy(s.name, "John");
    s.age = 20;
    s.marks = 85.5;

    printf("\n\n\t  Structure - Student");
    printf("\n\n\t  Name: %s", s.name);
    printf("\n\n\t  Age: %d", s.age);
    printf("\n\n\t  Marks: %.2f", s.marks);

    union Data d;
    d.i = 10;
    printf("\n\n\t  Union - Integer");
    printf("\n\n\t  Integer: %d", d.i);
    d.f = 3.14;
    
    printf("\n\n\t  Float: %.2f", d.f);
    strcpy(d.str, "Hello");
    printf("\n\n\t String: %s", d.str);

    
}
	
	

