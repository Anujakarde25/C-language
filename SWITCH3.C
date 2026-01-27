#include<stdio.h>
#include<conio.h>
void main()
{
  int ch;
  float a,r,v,c;
  clrscr();
  printf("press 1: area of circle");
  printf("\npress 2: circumference of circle");
  printf("\npress 3: volume of sphere");
  printf("\nenter your choice :");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
   {

      printf("enter radius :");
      scanf("%f",&r);
      a=3.14*r*r;
      printf("area of circle=%f",a);
      break;
    }
    case 2:
    {
      printf("enter radius :");
      scanf("%f",&r);
      c=2*3.14*r;
      printf("circumference of circle=%f",c);
      break;
    }
    case 3:
    {
     printf("enter radius :");
     scanf("%f",&r);
     v=(4/3)*3.14*r*r*r;
     printf("volume of sphere=%f",v);
     break;
    }

  }
 getch();

}