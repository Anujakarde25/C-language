#include<stdio.h>
#include<conio.h>
void main()
{
   float u,a,t,v,s;
   clrscr();
   printf("enter velocity :");
   scanf("%f",&u);
   printf("enter acceleration :");
   scanf("%f",&a);
   printf("enter time :");
   scanf("%f",&t);
   v=u+a*t;
   s=u+a*t*t;
   printf("final velocity=%f",v);
   printf("\ndistance travelled=%f",s);
   getch();



}