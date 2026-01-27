#include<stdio.h>
#include<conio.h>
void main()
{
   int y;
   clrscr();
   printf("enter year :");
   scanf("%d",&y);
   if(y%4==0)
   printf("this is leap year");
   else
   printf("this is not a leap year");
   getch();




}