#include<stdio.h>
#include<conio.h>
void main()
{
   float s,l,b,h,a;
   int ch;
   clrscr();
   printf("\npress 1: area of square");
   printf("\npress 2: area of rectangle");
   printf("\npress 3: area of triangle");
   printf("\nenter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
     {
      printf("enter length of side");
      scanf("%f",&s);
      a=s*s;
      printf("area of square=%f",a);
      break;
     }
    case 2:
     {
      printf("enter length & breadth");
      scanf("%f%f",&l,&b);
      a=l*b;
      printf("area of rectangle=%f",a);
      break;
     }
    case 3:
     {
      printf("enter base & height :");
      scanf("%f%f",&b,&h);
      a=0.5*b*h;
      printf("area of triangle");
      break;
     }

   }
getch();

}